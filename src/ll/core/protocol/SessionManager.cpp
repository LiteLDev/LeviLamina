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

            session = std::make_shared<ProtocolSession>(
                SessionIdentity{key, handshakeId},
                std::move(registry),
                std::move(transport),
                limits
            );

            auto found = std::ranges::find_if(mSessions, [&](auto const& entry) {
                auto const& candidate = entry.first;
                return candidate.endpointInstanceId == key.endpointInstanceId && candidate.role == key.role
                    && candidate.connection == key.connection && candidate.subClientId == key.subClientId;
            });

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

bool SessionManager::close(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) noexcept {
    try {
        SessionKey key{mEndpointInstanceId, mRole, std::string{connection}, subClientId};

        std::shared_ptr<ProtocolSession> session;
        {
            std::scoped_lock lock{mMutex};

            auto found = mSessions.find(key);
            if (found == mSessions.end() || found->second->generation() != generation) {
                return false;
            }

            session = std::move(found->second);
            mSessions.erase(found);
        }

        session->beginClosing();
        session->close();
        return true;
    } catch (...) {
        return false;
    }
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

void SessionManager::closeAll() noexcept {
    std::map<SessionKey, std::shared_ptr<ProtocolSession>> sessions;
    {
        std::scoped_lock lock{mMutex};
        sessions.swap(mSessions);
    }

    for (auto const& session : sessions | std::views::values) {
        session->beginClosing();
        session->close();
    }
}

} // namespace ll::protocol::detail
