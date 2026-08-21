#include "ll/core/protocol/SessionManager.h"

#include <ranges>
#include <utility>

#include "ll/api/protocol/Error.h"

namespace ll::protocol::detail {

SessionManager::SessionManager(std::uint64_t endpointInstanceId, EndpointRole role) noexcept
: mEndpointInstanceId(endpointInstanceId),
  mRole(role) {}

Expected<std::shared_ptr<ProtocolSession>> SessionManager::open(
    std::string                             connection,
    std::uint8_t                            subClientId,
    std::uint64_t                           generation,
    std::uint64_t                           handshakeId,
    std::shared_ptr<RegistrySnapshot const> registry,
    std::shared_ptr<SessionTransport>       transport,
    TransportLimits                         limits
) noexcept {
    try {
        if (generation == 0 || handshakeId == 0 || !registry || !transport) {
            return makeProtocolError(ProtocolErrc::InternalFailure, "invalid session input");
        }

        ConnectionKey key{mEndpointInstanceId, mRole, std::move(connection), subClientId, generation};

        std::shared_ptr<ProtocolSession> previous;
        std::shared_ptr<ProtocolSession> session;
        {
            std::scoped_lock lock{mMutex};

            auto found = std::ranges::find_if(mSessions, [&](auto const& entry) {
                auto const& candidate = entry.first;
                return candidate.endpointInstanceId == key.endpointInstanceId && candidate.role == key.role
                    && candidate.connection == key.connection && candidate.subClientId == key.subClientId;
            });

            if (found != mSessions.end()) {
                if (found->first.generation == generation) {
                    return makeSessionError(SessionErrc::WrongState, "session already exists");
                }
                if (found->first.generation > generation) {
                    return makeSessionError(SessionErrc::WrongGeneration);
                }
            }

            session = std::make_shared<ProtocolSession>(
                SessionIdentity{key, handshakeId},
                std::move(registry),
                std::move(transport),
                limits
            );

            if (found != mSessions.end()) {
                auto node = mSessions.extract(found);

                previous              = std::move(node.mapped());
                node.key().generation = generation;
                node.mapped()         = session;
                mSessions.insert(std::move(node));
            } else {
                mSessions.emplace(std::move(key), session);
            }
        }

        if (previous) {
            previous->beginClosing();
            previous->close();
        }

        return session;
    } catch (...) {
        return makeExceptionError();
    }
}

std::shared_ptr<ProtocolSession>
SessionManager::find(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) const noexcept {
    try {
        ConnectionKey key{mEndpointInstanceId, mRole, std::string{connection}, subClientId, generation};

        std::scoped_lock lock{mMutex};

        auto found = mSessions.find(key);
        if (found == mSessions.end()) return nullptr;

        return found->second;
    } catch (...) {
        return nullptr;
    }
}

std::shared_ptr<ProtocolSession>
SessionManager::extract(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) noexcept {
    try {
        ConnectionKey key{mEndpointInstanceId, mRole, std::string{connection}, subClientId, generation};

        std::shared_ptr<ProtocolSession> session;
        {
            std::scoped_lock lock{mMutex};

            auto found = mSessions.find(key);
            if (found == mSessions.end()) return nullptr;

            session = std::move(found->second);
            mSessions.erase(found);
        }

        return session;
    } catch (...) {
        return nullptr;
    }
}

SessionManager::SessionMap
SessionManager::extractConnection(std::string_view connection, std::uint64_t generation) noexcept {
    SessionMap       result;
    std::scoped_lock lock{mMutex};

    for (auto current = mSessions.begin(); current != mSessions.end();) {
        if (current->first.connection == connection && current->first.generation == generation) {
            auto extracted = mSessions.extract(current++);
            result.insert(std::move(extracted));
        } else {
            ++current;
        }
    }

    return result;
}

SessionManager::SessionMap SessionManager::extractAll() noexcept {
    SessionMap result;

    std::scoped_lock lock{mMutex};
    result.swap(mSessions);
    return result;
}

std::vector<std::shared_ptr<ProtocolSession>> SessionManager::activeSessions() const {
    std::vector<std::shared_ptr<ProtocolSession>> result;

    std::scoped_lock lock{mMutex};

    result.reserve(mSessions.size());
    for (auto const& session : mSessions | std::views::values) {
        if (session->active(session->generation())) result.emplace_back(session);
    }

    return result;
}

} // namespace ll::protocol::detail
