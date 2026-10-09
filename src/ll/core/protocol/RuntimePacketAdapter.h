#pragma once

#include <cstdint>
#include <memory>

#include "ll/api/Expected.h"
#include "ll/api/protocol/Id.h"

class NetEventCallback;
class NetworkIdentifier;

namespace ll::protocol::detail {

class ControlPacket;
class ProtocolEnvelopePacket;

class RuntimePacketReceiver {
public:
    virtual ~RuntimePacketReceiver() = default;

    [[nodiscard]] virtual Expected<>
    receive(NetworkIdentifier const& networkId, NetEventCallback& callback, ControlPacket const& packet) = 0;

    [[nodiscard]] virtual Expected<>
    receive(NetworkIdentifier const& networkId, NetEventCallback& callback, ProtocolEnvelopePacket const& packet) = 0;
};

class RuntimePacketAdapter {
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    RuntimePacketAdapter();
    ~RuntimePacketAdapter();

    RuntimePacketAdapter(RuntimePacketAdapter const&)            = delete;
    RuntimePacketAdapter& operator=(RuntimePacketAdapter const&) = delete;

    [[nodiscard]] Expected<> initialize() noexcept;
    [[nodiscard]] Expected<> installPayloadSlot(PayloadId const& id, std::uint64_t runtimeId) noexcept;

    [[nodiscard]] bool initialized() const;
    [[nodiscard]] bool hasPayloadSlot(PayloadId const& id, std::uint64_t runtimeId) const;

    [[nodiscard]] Expected<> setReceiver(RuntimePacketReceiver& receiver) noexcept;
};

} // namespace ll::protocol::detail
