#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>

#include "ll/core/protocol/RuntimePacketAdapter.h"

class ServerNetworkHandler;
class ConnectionRequest;
class NetEventCallback;
struct NetworkIdentifierWithSubId;

namespace ll::protocol::detail {

class ServerLoginIntegration final : public RuntimePacketReceiver {
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    enum class HandshakeDisposition : std::uint8_t {
        ContinueVanilla,
        Deferred,
        Rejected,
    };

    enum class InboundDisposition : std::uint8_t {
        UseNativePolicy,
        Allowed,
        Rejected,
    };

    ServerLoginIntegration();
    ~ServerLoginIntegration() override;

    ServerLoginIntegration(ServerLoginIntegration const&)            = delete;
    ServerLoginIntegration& operator=(ServerLoginIntegration const&) = delete;

    [[nodiscard]] Expected<> initialize();
    void                     shutdown();

    [[nodiscard]] HandshakeDisposition
    handleHandshake(ServerNetworkHandler& handler, NetworkIdentifierWithSubId const& sender);

    void observeConnectionRequest(NetworkIdentifier const& id, ConnectionRequest const& request) noexcept;

    [[nodiscard]] InboundDisposition filterIncoming(NetworkIdentifierWithSubId const& sender, std::size_t packetSize);

    void closeSubclient(NetworkIdentifier const& id, std::uint8_t subClientId);
    void closeConnection(NetworkIdentifier const& id);
    void closeAll();

    [[nodiscard]] Expected<>
    receive(NetworkIdentifier const& networkId, NetEventCallback& callback, ControlPacket const& packet) override;

    [[nodiscard]] Expected<> receive(
        NetworkIdentifier const&      networkId,
        NetEventCallback&             callback,
        ProtocolEnvelopePacket const& packet
    ) override;
};

[[nodiscard]] ServerLoginIntegration& getServerLoginIntegration();

[[nodiscard]] Expected<>
invokeOriginalClientHandshake(NetEventCallback& callback, NetworkIdentifierWithSubId const& sender) noexcept;

} // namespace ll::protocol::detail

namespace ll::protocol::server {

[[nodiscard]] Expected<> initializeLoginIntegration();
void                     shutdownLoginIntegration();

} // namespace ll::protocol::server
