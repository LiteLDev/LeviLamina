#pragma once

#include <memory>
#include <string>

#include "ll/api/network/packet/Packet.h"

#include "mc/network/Packet.h"

namespace ll::network {

class RuntimePacket final : public ::Packet {
    friend class ll::network::Packet;

    std::unique_ptr<ll::network::Packet>    ownedPacket;
    optional_ref<ll::network::Packet const> packet;
    PacketRuntimeId                         runtimeId{};

    RuntimePacket(ll::network::Packet const& packet) : packet(packet) {
        runtimeId     = packet.getRuntimeId();
        mReliability  = packet.mReliability;
        mPriority     = packet.mPriority;
        mCompressible = packet.mCompressible;
        mSenderSubId  = packet.mSenderSubId;
    }

public:
    RuntimePacket() = default;

    RuntimePacket(std::unique_ptr<ll::network::Packet> packet)
    : ownedPacket(std::move(packet)),
      packet(ownedPacket.get()) {
        if (packet) {
            runtimeId     = packet->getRuntimeId();
            mReliability  = packet->mReliability;
            mPriority     = packet->mPriority;
            mCompressible = packet->mCompressible;
            mSenderSubId  = packet->mSenderSubId;
        }
    }

    [[nodiscard]] constexpr PacketRuntimeId getRuntimeId() const { return runtimeId; }

    [[nodiscard]] bool           isOwned() const { return ownedPacket != nullptr; }
    [[nodiscard]] constexpr bool hasPacket() const { return packet.has_value(); }

    [[nodiscard]] constexpr optional_ref<ll::network::Packet const> getPacket() const { return packet; }

    [[nodiscard]] constexpr optional_ref<ll::network::Packet> getOwnedPacket() const { return ownedPacket.get(); }

    [[nodiscard]] constexpr void movePacket(std::unique_ptr<ll::network::Packet> newPacket) {
        ownedPacket = std::move(newPacket);
        packet      = ownedPacket.get();
    }

    [[nodiscard]] constexpr std::unique_ptr<ll::network::Packet> releasePacket() {
        packet = nullptr;
        return std::move(ownedPacket);
    }

private:
    [[nodiscard]] MinecraftPacketIds getId() const override;
    [[nodiscard]] std::string        getName() const override;
    void                             write(BinaryStream&) const override;
    Bedrock::Result<void>            _read(ReadOnlyBinaryStream&) override;
};

}; // namespace ll::network
