#include "ll/core/protocol/LifecycleCoordinator.h"

#include <limits>
#include <ranges>
#include <utility>

#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"

namespace ll::protocol::detail {

class ProtocolLifecycleEventEmitter
: public event::
      Emitter<[](auto&&...) { return nullptr; }, ProtocolEstablishedEvent, ProtocolClosedEvent, ProtocolErrorEvent> {};

LifecycleCoordinator::LifecycleCoordinator(std::uint64_t endpointInstanceId, EndpointRole role) noexcept
: mEndpointInstanceId(endpointInstanceId),
  mRole(role),
  mSessions(endpointInstanceId, role) {}

LifecycleCoordinator::~LifecycleCoordinator() {
    try {
        closeAll(ProtocolCloseReason::RuntimeStopping);
    } catch (...) {}
}

void LifecycleCoordinator::finalize(std::shared_ptr<ProtocolSession> const& session, ProtocolCloseReason reason) {
    if (!session || !session->beginClosing()) return;

    auto snapshot = session->snapshot(session->generation());
    if (snapshot) {
        try {
            ll::event::EventBus::getInstance().publish(
                ProtocolClosedEvent{SessionAccess::makeView(std::move(snapshot)), reason}
            );
        } catch (...) {
            // A third-party event listener must not interrupt deterministic teardown.
        }
    }

    session->close();
}

void LifecycleCoordinator::finalize(SessionManager::SessionMap sessions, ProtocolCloseReason reason) {
    for (auto const& session : sessions | std::views::values) finalize(session, reason);
}

Expected<std::uint64_t> LifecycleCoordinator::openConnection(std::string const& connection) noexcept {
    try {
        SessionManager::SessionMap previousSessions;
        std::uint64_t              generation{};
        {
            std::scoped_lock lock{mMutex};

            if (mStopping) return makeLifecycleError(LifecycleErrc::RuntimeStopping);
            if (mNextGeneration == (std::numeric_limits<std::uint64_t>::max)()) {
                return makeProtocolError(ProtocolErrc::InternalFailure, "connection generation exhausted");
            }

            generation = mNextGeneration++;

            auto [entry, inserted] = mConnections.try_emplace(connection, generation);
            if (!inserted) {
                auto const previousGeneration = std::exchange(entry->second, generation);
                previousSessions              = mSessions.extractConnection(connection, previousGeneration);
            }
        }

        finalize(std::move(previousSessions), ProtocolCloseReason::ConnectionClosed);
        return generation;
    } catch (...) {
        return makeExceptionError();
    }
}

std::uint64_t LifecycleCoordinator::currentGeneration(std::string_view connection) const noexcept {
    try {
        std::scoped_lock lock{mMutex};

        auto const found = mConnections.find(connection);
        return found == mConnections.end() ? 0 : found->second;
    } catch (...) {
        return 0;
    }
}

Expected<std::shared_ptr<ProtocolSession>> LifecycleCoordinator::openSession(
    std::string_view                        connection,
    std::uint8_t                            subClientId,
    std::uint64_t                           generation,
    std::uint64_t                           handshakeId,
    std::shared_ptr<RegistrySnapshot const> registry,
    std::shared_ptr<SessionTransport>       transport,
    TransportLimits                         limits
) noexcept {
    try {
        auto const registryRevision = registry ? registry->revision : 0;

        auto result = [&]() -> Expected<std::shared_ptr<ProtocolSession>> {
            std::scoped_lock lock{mMutex};

            if (mStopping) return makeLifecycleError(LifecycleErrc::RuntimeStopping);

            auto const found = mConnections.find(connection);
            if (found == mConnections.end() || generation == 0 || found->second != generation) {
                return makeSessionError(SessionErrc::WrongGeneration);
            }

            return mSessions.open(
                std::string{connection},
                subClientId,
                generation,
                handshakeId,
                std::move(registry),
                std::move(transport),
                limits
            );
        }();

        if (result) {
            auto currentRegistry = PayloadRegistryAccess::snapshot(PayloadRegistry::getInstance());
            if (!currentRegistry || currentRegistry->revision != registryRevision) {
                auto const& key = (*result)->identity().key;

                auto stale = mSessions.extract(key.connection, key.subClientId, key.generation);
                finalize(stale, ProtocolCloseReason::RegistryChanged);

                return makeSessionError(SessionErrc::RegistryChanged);
            }
        }

        return result;
    } catch (...) {
        return makeExceptionError();
    }
}

std::shared_ptr<ProtocolSession> LifecycleCoordinator::findSession(
    std::string_view connection,
    std::uint8_t     subClientId,
    std::uint64_t    generation
) const {
    if (currentGeneration(connection) != generation) return nullptr;
    return mSessions.find(connection, subClientId, generation);
}

Expected<> LifecycleCoordinator::activateSession(std::shared_ptr<ProtocolSession> const& session) noexcept {
    try {
        if (!session || session->identity().key.endpointInstanceId != mEndpointInstanceId
            || session->identity().key.role != mRole) {
            return makeSessionError(SessionErrc::WrongGeneration);
        }

        auto const& key = session->identity().key;
        if (findSession(key.connection, key.subClientId, key.generation) != session) {
            return makeSessionError(SessionErrc::WrongGeneration);
        }

        if (auto activated = session->activate(); !activated) return activated;

        auto snapshot = session->snapshot(session->generation());
        if (!snapshot) return makeSessionError(SessionErrc::WrongGeneration);

        try {
            ll::event::EventBus::getInstance().publish(ProtocolEstablishedEvent{SessionAccess::makeSession(session)});
        } catch (...) {}

        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

void LifecycleCoordinator::reportProtocolError(std::shared_ptr<ProtocolSession> const& session, ProtocolErrc error) {
    try {
        std::optional<SessionView> view;
        if (session) {
            auto const& key = session->identity().key;
            if (key.endpointInstanceId != mEndpointInstanceId || key.role != mRole
                || findSession(key.connection, key.subClientId, key.generation) != session) {
                return;
            }

            auto snapshot = session->snapshot(key.generation);
            if (!snapshot) return;

            view.emplace(SessionAccess::makeView(std::move(snapshot)));
        }

        ll::event::EventBus::getInstance().publish(ProtocolErrorEvent{std::move(view), error});
    } catch (...) {}
}

bool LifecycleCoordinator::closeSubclient(
    std::string_view    connection,
    std::uint8_t        subClientId,
    std::uint64_t       generation,
    ProtocolCloseReason reason
) {
    std::shared_ptr<ProtocolSession> session;
    {
        std::scoped_lock lock{mMutex};

        auto const found = mConnections.find(connection);
        if (found == mConnections.end() || found->second != generation) return false;

        session = mSessions.extract(connection, subClientId, generation);
    }

    if (!session) return false;

    finalize(session, reason);
    return true;
}

bool LifecycleCoordinator::closeConnection(
    std::string_view    connection,
    std::uint64_t       generation,
    ProtocolCloseReason reason
) {
    SessionManager::SessionMap sessions;
    {
        std::scoped_lock lock{mMutex};

        auto const found = mConnections.find(connection);
        if (found == mConnections.end() || found->second != generation) return false;

        mConnections.erase(found);
        sessions = mSessions.extractConnection(connection, generation);
    }

    finalize(std::move(sessions), reason);
    return true;
}

void LifecycleCoordinator::invalidateSessions(ProtocolCloseReason reason) {
    SessionManager::SessionMap sessions;
    {
        std::scoped_lock lock{mMutex};
        sessions = mSessions.extractAll();
    }
    finalize(std::move(sessions), reason);
}

void LifecycleCoordinator::closeAll(ProtocolCloseReason reason) {
    SessionManager::SessionMap sessions;
    {
        std::scoped_lock lock{mMutex};

        if (reason == ProtocolCloseReason::RuntimeStopping) mStopping = true;

        mConnections.clear();
        sessions = mSessions.extractAll();
    }
    finalize(std::move(sessions), reason);
}

std::vector<std::shared_ptr<ProtocolSession>> LifecycleCoordinator::activeSessions() const {
    return mSessions.activeSessions();
}

} // namespace ll::protocol::detail
