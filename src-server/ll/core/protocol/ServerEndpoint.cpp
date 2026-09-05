#include "ll/core/protocol/ServerEndpoint.h"

#include <algorithm>
#include <atomic>
#include <iterator>
#include <ranges>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/protocol/ConnectionLookup.h"

#include "mc/network/NetworkConnection.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/NetworkSystem.h"

namespace ll::protocol::detail {

std::mutex                      ServerEndpointMutex;
std::shared_ptr<ServerEndpoint> CurrentServerEndpoint;
std::atomic_uint64_t            NextServerEndpointInstanceId{1};

ServerEndpoint::ServerEndpoint(std::uint64_t endpointInstanceId)
: mLifecycle(endpointInstanceId, EndpointRole::Server) {}

ServerEndpoint::~ServerEndpoint() {
    try {
        closeAll(ProtocolCloseReason::RuntimeStopping);
    } catch (...) {}
}

bool ServerEndpoint::isOnEndpointThread() const {
    std::scoped_lock lock{mMutex};
    return mEndpointThread != std::thread::id{} && mEndpointThread == std::this_thread::get_id();
}

Expected<Session> ServerEndpoint::resolve(NetworkIdentifierWithSubId const& recipient) noexcept {
    try {
        auto const    connection = recipient.id.toString();
        std::uint64_t generation{};
        {
            std::scoped_lock lock{mMutex};

            auto const found = mConnections.find(connection);
            if (found == mConnections.end() || !(found->second.id == recipient.id)) {
                return makeSessionError(SessionErrc::NotFound);
            }

            generation = found->second.generation;
        }

        auto session = mLifecycle.findSession(connection, static_cast<std::uint8_t>(recipient.subClientId), generation);
        if (!session) return makeSessionError(SessionErrc::NotNegotiated);

        return SessionAccess::makeSession(session);
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<std::vector<Session>> ServerEndpoint::snapshotActive() noexcept {
    try {
        auto sessions = mLifecycle.activeSessions();

        std::vector<Session> result;
        result.reserve(sessions.size());

        std::ranges::transform(sessions, std::back_inserter(result), SessionAccess::makeSession);
        return result;
    } catch (...) {
        return makeExceptionError();
    }
}

void ServerEndpoint::observeConnection(NetworkIdentifier const& id) {
    std::string   connection;
    std::uint64_t generationValue{};
    try {
        connection = id.toString();

        auto generation = mLifecycle.openConnection(connection);
        if (!generation) return;

        generationValue = *generation;

        std::scoped_lock lock{mMutex};

        mEndpointThread = std::this_thread::get_id();

        mConnections.erase(connection);
        mConnections.emplace(connection, ConnectionRecord{id, generationValue});
    } catch (...) {
        if (generationValue != 0) {
            mLifecycle.closeConnection(connection, generationValue, ProtocolCloseReason::ConnectionClosed);

            std::scoped_lock lock{mMutex};
            mConnections.erase(connection);
        }
    }
}

std::uint64_t ServerEndpoint::currentGeneration(NetworkIdentifier const& id) const noexcept {
    try {
        auto const connection = id.toString();

        std::scoped_lock lock{mMutex};

        auto const found = mConnections.find(connection);
        return found != mConnections.end() && found->second.id == id ? found->second.generation : 0;
    } catch (...) {
        return 0;
    }
}

Expected<std::shared_ptr<ProtocolSession>> ServerEndpoint::openSession(
    NetworkIdentifierWithSubId const&       recipient,
    std::uint64_t                           generation,
    std::uint64_t                           handshakeId,
    std::shared_ptr<RegistrySnapshot const> registry,
    std::shared_ptr<SessionTransport>       transport,
    TransportLimits                         limits
) noexcept {
    try {
        auto const connection = recipient.id.toString();
        if (currentGeneration(recipient.id) != generation) {
            return makeSessionError(SessionErrc::WrongGeneration);
        }

        auto session = mLifecycle.openSession(
            connection,
            static_cast<std::uint8_t>(recipient.subClientId),
            generation,
            handshakeId,
            std::move(registry),
            std::move(transport),
            limits,
            recipient.id
        );

        if (!session) return session;
        if (currentGeneration(recipient.id) != generation) {
            mLifecycle.closeSubclient(
                connection,
                static_cast<std::uint8_t>(recipient.subClientId),
                generation,
                ProtocolCloseReason::ConnectionClosed
            );
            return makeSessionError(SessionErrc::WrongGeneration);
        }

        return session;
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ServerEndpoint::activateSession(std::shared_ptr<ProtocolSession> const& session) {
    return mLifecycle.activateSession(session);
}

void ServerEndpoint::reportProtocolError(std::shared_ptr<ProtocolSession> const& session, ProtocolErrc error) {
    mLifecycle.reportProtocolError(session, error);
}

std::shared_ptr<ProtocolSession>
ServerEndpoint::findSession(NetworkIdentifier const& id, std::uint8_t subClientId, std::uint64_t generation) noexcept {
    try {
        return mLifecycle.findSession(id.toString(), subClientId, generation);
    } catch (...) {
        return {};
    }
}

void ServerEndpoint::closeSubclient(
    NetworkIdentifier const& id,
    std::uint8_t             subClientId,
    ProtocolCloseReason      reason
) noexcept {
    try {
        auto const connection = id.toString();

        std::uint64_t generation{};
        {
            std::scoped_lock lock{mMutex};

            auto const found = mConnections.find(connection);
            if (found == mConnections.end() || !(found->second.id == id)) return;

            generation = found->second.generation;
        }

        mLifecycle.closeSubclient(connection, subClientId, generation, reason);
    } catch (...) {}
}

void ServerEndpoint::closeConnection(NetworkIdentifier const& id, ProtocolCloseReason reason) noexcept {
    try {
        auto const connection = id.toString();

        std::uint64_t generation{};
        {
            std::scoped_lock lock{mMutex};

            auto const found = mConnections.find(connection);
            if (found == mConnections.end() || !(found->second.id == id)) return;

            generation = found->second.generation;
            mConnections.erase(found);
        }

        mLifecycle.closeConnection(connection, generation, reason);
    } catch (...) {}
}

void ServerEndpoint::closeAll(ProtocolCloseReason reason) {
    {
        std::scoped_lock lock{mMutex};
        mConnections.clear();
    }
    mLifecycle.closeAll(reason);
}

void ServerEndpoint::invalidateSessions(ProtocolCloseReason reason) { mLifecycle.invalidateSessions(reason); }

NetworkConnection*
ServerEndpoint::findLiveConnection(NetworkIdentifier const& id, std::uint64_t generation) const noexcept {
    try {
        if (!isOnEndpointThread()) return nullptr;

        auto const key = id.toString();
        {
            std::scoped_lock lock{mMutex};

            auto const found = mConnections.find(key);
            if (found == mConnections.end() || found->second.generation != generation || !(found->second.id == id)) {
                return nullptr;
            }
        }

        auto network = service::getNetworkSystem();
        if (!network) return nullptr;

        return ll::protocol::detail::findLiveConnection<NetworkConnection>(
            network->getConnections(),
            id,
            [](NetworkConnection const& connection) -> NetworkIdentifier const& { return connection.mId; }
        );
    } catch (...) {}

    return nullptr;
}

std::shared_ptr<ServerEndpoint> getServerEndpoint() {
    std::scoped_lock lock{ServerEndpointMutex};
    return CurrentServerEndpoint;
}

} // namespace ll::protocol::detail

namespace ll::protocol::server {

Expected<> initializeServerEndpoint() noexcept {
    try {
        std::scoped_lock lock{detail::ServerEndpointMutex};
        if (detail::CurrentServerEndpoint) return {};

        auto endpoint = std::make_shared<detail::ServerEndpoint>(detail::NextServerEndpointInstanceId.fetch_add(1));
        if (auto installed = detail::setServerSessionSource(endpoint); !installed) return installed;

        detail::CurrentServerEndpoint = std::move(endpoint);
        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

void shutdownServerEndpoint() {
    std::shared_ptr<detail::ServerEndpoint> endpoint;
    {
        std::scoped_lock lock{detail::ServerEndpointMutex};
        endpoint = std::exchange(detail::CurrentServerEndpoint, nullptr);
    }

    if (endpoint) {
        detail::clearServerSessionSource(*endpoint);
        endpoint->closeAll(ProtocolCloseReason::RuntimeStopping);
    }
}

} // namespace ll::protocol::server
