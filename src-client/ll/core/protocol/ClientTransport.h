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

class ClientTransport final : public SessionTransport {
    NetworkIdentifierWithSubId mPeer;
    std::uint64_t              mGeneration{};

    [[nodiscard]] Expected<> sendLogical(std::unique_ptr<ll::network::Packet> packet) noexcept;

public:
    ClientTransport(NetworkIdentifierWithSubId peer, std::uint64_t generation);

    [[nodiscard]] bool       isOnEndpointThread() const override;
    [[nodiscard]] Expected<> send(std::unique_ptr<ProtocolEnvelopePacket> packet) noexcept override;
    [[nodiscard]] Expected<> sendControl(std::unique_ptr<ControlPacket> packet) noexcept;
};

} // namespace ll::protocol::detail
