#pragma once

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

#include "ll/core/protocol/LifecycleCoordinator.h"
#include "ll/core/protocol/ServerSessionSource.h"

#include "mc/network/NetworkIdentifier.h"

class NetworkConnection;
struct NetworkIdentifierWithSubId;

namespace ll::protocol::detail {

class ServerEndpoint final : public ServerSessionSource {
    struct ConnectionRecord {
        NetworkIdentifier id;
        std::uint64_t     generation{};
    };

    mutable std::mutex                                   mMutex;
    std::map<std::string, ConnectionRecord, std::less<>> mConnections;
    std::thread::id                                      mEndpointThread;
    LifecycleCoordinator                                 mLifecycle;

public:
    explicit ServerEndpoint(std::uint64_t endpointInstanceId) noexcept;
    ~ServerEndpoint() override;

    ServerEndpoint(ServerEndpoint const&)            = delete;
    ServerEndpoint& operator=(ServerEndpoint const&) = delete;

    [[nodiscard]] bool                           isOnEndpointThread() const noexcept override;
    [[nodiscard]] Expected<Session>              resolve(NetworkIdentifierWithSubId const& recipient) noexcept override;
    [[nodiscard]] Expected<std::vector<Session>> snapshotActive() noexcept override;

    void observeConnection(NetworkIdentifier const& id) noexcept;

    [[nodiscard]] std::uint64_t currentGeneration(NetworkIdentifier const& id) const noexcept;
    [[nodiscard]] Expected<std::shared_ptr<ProtocolSession>> openSession(
        NetworkIdentifierWithSubId const&       recipient,
        std::uint64_t                           generation,
        std::uint64_t                           handshakeId,
        std::shared_ptr<RegistrySnapshot const> registry,
        std::shared_ptr<SessionTransport>       transport,
        TransportLimits                         limits
    ) noexcept;

    void closeSubclient(
        NetworkIdentifier const& id,
        std::uint8_t             subClientId,
        ProtocolCloseReason      reason = ProtocolCloseReason::ConnectionClosed
    ) noexcept;
    void closeConnection(
        NetworkIdentifier const& id,
        ProtocolCloseReason      reason = ProtocolCloseReason::ConnectionClosed
    ) noexcept;
    void closeAll(ProtocolCloseReason reason) noexcept;

    [[nodiscard]] NetworkConnection*
    findLiveConnection(NetworkIdentifier const& id, std::uint64_t generation) const noexcept;
};

[[nodiscard]] std::shared_ptr<ServerEndpoint> getServerEndpoint() noexcept;

} // namespace ll::protocol::detail

namespace ll::protocol::server {

[[nodiscard]] Expected<> initializeServerEndpoint() noexcept;
void                     shutdownServerEndpoint() noexcept;

} // namespace ll::protocol::server
