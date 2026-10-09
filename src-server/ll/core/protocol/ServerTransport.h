#pragma once

#include <cstdint>
#include <memory>

#include "ll/core/protocol/ProtocolSession.h"

#include "mc/network/NetworkIdentifierWithSubId.h"

namespace ll::network {
class Packet;
}

namespace ll::protocol::detail {

class ControlPacket;

class ServerTransport final : public SessionTransport {
    NetworkIdentifierWithSubId mRecipient;
    std::uint64_t              mGeneration{};

    [[nodiscard]] Expected<> sendLogical(std::unique_ptr<ll::network::Packet> packet) noexcept;

public:
    ServerTransport(NetworkIdentifierWithSubId recipient, std::uint64_t generation);

    [[nodiscard]] bool       isOnEndpointThread() const override;
    [[nodiscard]] Expected<> send(std::unique_ptr<ProtocolEnvelopePacket> packet) noexcept override;
    [[nodiscard]] Expected<> sendControl(std::unique_ptr<ControlPacket> packet) noexcept;
};

} // namespace ll::protocol::detail
