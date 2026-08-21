#include "ll/core/protocol/LifecycleCoordinator.h"

#include <limits>
#include <ranges>
#include <utility>

#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/protocol/Error.h"

namespace ll::protocol::detail {

class ProtocolLifecycleEventEmitter
: public event::Emitter<
      [](auto&&...) { return nullptr; },
      ProtocolEstablishedEvent,
      ProtocolClosedEvent,
      ProtocolErrorEvent> {};

LifecycleCoordinator::LifecycleCoordinator(std::uint64_t endpointInstanceId, EndpointRole role) noexcept
: mEndpointInstanceId(endpointInstanceId),
  mRole(role),
  mSessions(endpointInstanceId, role) {}

LifecycleCoordinator::~LifecycleCoordinator() { closeAll(ProtocolCloseReason::RuntimeStopping); }

void LifecycleCoordinator::finalize(
    std::shared_ptr<ProtocolSession> const& session,
    ProtocolCloseReason                     reason
) noexcept {
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

void LifecycleCoordinator::finalize(SessionManager::SessionMap sessions, ProtocolCloseReason reason) noexcept {
    for (auto const& session : sessions | std::views::values) finalize(session, reason);
}

Expected<std::uint64_t> LifecycleCoordinator::openConnection(std::string const& connection) noexcept {
    try {
        SessionManager::SessionMap previousSessions;
        std::uint64_t              generation{};
        {
            std::scoped_lock lock{mMutex};
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
        std::shared_ptr<ProtocolSession> previous;

        auto result = [&]() -> Expected<std::shared_ptr<ProtocolSession>> {
            std::scoped_lock lock{mMutex};

            auto const found = mConnections.find(connection);
            if (found == mConnections.end() || generation == 0 || found->second != generation) {
                return makeSessionError(SessionErrc::WrongGeneration);
            }

            previous = mSessions.extract(connection, subClientId, generation);
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

        finalize(previous, ProtocolCloseReason::ConnectionClosed);
        return result;
    } catch (...) {
        return makeExceptionError();
    }
}

std::shared_ptr<ProtocolSession> LifecycleCoordinator::findSession(
    std::string_view connection,
    std::uint8_t     subClientId,
    std::uint64_t    generation
) const noexcept {
    if (currentGeneration(connection) != generation) return nullptr;
    return mSessions.find(connection, subClientId, generation);
}

bool LifecycleCoordinator::closeSubclient(
    std::string_view    connection,
    std::uint8_t        subClientId,
    std::uint64_t       generation,
    ProtocolCloseReason reason
) noexcept {
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
) noexcept {
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

void LifecycleCoordinator::closeAll(ProtocolCloseReason reason) noexcept {
    SessionManager::SessionMap sessions;
    {
        std::scoped_lock lock{mMutex};
        mConnections.clear();
        sessions = mSessions.extractAll();
    }
    finalize(std::move(sessions), reason);
}

std::vector<std::shared_ptr<ProtocolSession>> LifecycleCoordinator::activeSessions() const {
    return mSessions.activeSessions();
}

} // namespace ll::protocol::detail
