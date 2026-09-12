#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>

#include "ll/core/protocol/RuntimePacketAdapter.h"

enum class PlayStatus : int;
class ClientInstance;
struct NetworkIdentifierWithSubId;

namespace ll::protocol::detail {

class ClientLoginIntegration final : public RuntimePacketReceiver {
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    enum class InboundDisposition : std::uint8_t {
        Rejected,
        UseNativePolicy,
    };

    enum class LoginSuccessDisposition : std::uint8_t {
        ContinueVanilla,
        ActivateAfterOrigin,
        Reject,
    };

    ClientLoginIntegration();
    ~ClientLoginIntegration() override;

    ClientLoginIntegration(ClientLoginIntegration const&)            = delete;
    ClientLoginIntegration& operator=(ClientLoginIntegration const&) = delete;

    [[nodiscard]] Expected<> initialize();
    void                     shutdown();

    void observeConnection(NetworkIdentifier const& id) noexcept;
    void closeConnection(NetworkIdentifier const& id) noexcept;
    void closeAll() noexcept;
    void pollTimeouts(ClientInstance& client) noexcept;

    [[nodiscard]] InboundDisposition filterIncoming(
        NetEventCallback&                  callback,
        NetworkIdentifierWithSubId const& sender,
        std::size_t                       packetSize
    );

    [[nodiscard]] LoginSuccessDisposition
    beforePlayStatus(NetworkIdentifier const& id, std::uint8_t subClientId, PlayStatus status) noexcept;
    [[nodiscard]] Expected<> completeLoginSuccess(NetworkIdentifier const& id, std::uint8_t subClientId) noexcept;

    [[nodiscard]] Expected<>
    receive(NetworkIdentifier const& networkId, NetEventCallback& callback, ControlPacket const& packet) override;
    [[nodiscard]] Expected<> receive(
        NetworkIdentifier const&      networkId,
        NetEventCallback&             callback,
        ProtocolEnvelopePacket const& packet
    ) override;
};

[[nodiscard]] ClientLoginIntegration& getClientLoginIntegration();

} // namespace ll::protocol::detail

namespace ll::protocol::client {

[[nodiscard]] Expected<> initializeLoginIntegration();
void                     shutdownLoginIntegration();

} // namespace ll::protocol::client
