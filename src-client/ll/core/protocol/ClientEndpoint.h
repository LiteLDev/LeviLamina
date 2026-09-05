#pragma once

#include <cstdint>
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <thread>

#include "ll/core/protocol/LifecycleCoordinator.h"

#include "mc/network/NetworkIdentifier.h"

namespace ll::protocol::detail {

class ClientEndpoint final {
    struct ConnectionRecord {
        NetworkIdentifier id;
        std::string       key;
        std::uint64_t     generation{};
        std::uint8_t      subClientId{};
    };

    mutable std::mutex              mMutex;
    std::optional<ConnectionRecord> mConnection;
    std::thread::id                 mEndpointThread;
    LifecycleCoordinator            mLifecycle;

public:
    explicit ClientEndpoint(std::uint64_t endpointInstanceId);

    ClientEndpoint(ClientEndpoint const&)            = delete;
    ClientEndpoint& operator=(ClientEndpoint const&) = delete;

    [[nodiscard]] bool isOnEndpointThread() const;

    void observeConnection(NetworkIdentifier const& id);

    [[nodiscard]] std::uint64_t currentGeneration(NetworkIdentifier const& id) const noexcept;
    [[nodiscard]] Expected<std::shared_ptr<ProtocolSession>> openSession(
        NetworkIdentifier const&                id,
        std::uint8_t                            subClientId,
        std::uint64_t                           generation,
        std::uint64_t                           handshakeId,
        std::shared_ptr<RegistrySnapshot const> registry,
        std::shared_ptr<SessionTransport>       transport,
        TransportLimits                         limits
    ) noexcept;

    [[nodiscard]] Expected<> activateSession(std::shared_ptr<ProtocolSession> const& session);

    void reportProtocolError(std::shared_ptr<ProtocolSession> const& session, ProtocolErrc error);

    [[nodiscard]] std::shared_ptr<ProtocolSession>
    findSession(NetworkIdentifier const& id, std::uint8_t subClientId, std::uint64_t generation) noexcept;

    void closeConnection(
        NetworkIdentifier const& id,
        ProtocolCloseReason      reason = ProtocolCloseReason::ConnectionClosed
    ) noexcept;
    void closeAll(ProtocolCloseReason reason);
    void invalidateSessions(ProtocolCloseReason reason);

    [[nodiscard]] Expected<Session> currentSession() noexcept;
};

[[nodiscard]] std::shared_ptr<ClientEndpoint> getClientEndpoint();

} // namespace ll::protocol::detail

namespace ll::protocol::client {

[[nodiscard]] Expected<> initializeClientEndpoint() noexcept;
void                     shutdownClientEndpoint();

} // namespace ll::protocol::client
