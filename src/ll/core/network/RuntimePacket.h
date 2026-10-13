#pragma once

#include <memory>
#include <string_view>

#include "ll/api/network/packet/Packet.h"

#include "mc/network/Packet.h"

namespace ll::network {

class RuntimePacket final : public ::Packet {
    std::unique_ptr<ll::network::Packet>    mOwnedPacket;
    optional_ref<ll::network::Packet const> mPacket;
    PacketRuntimeId                         mRuntimeId{};

public:
    RuntimePacket() = default;

    explicit RuntimePacket(ll::network::Packet const& packet) : mPacket(packet), mRuntimeId(packet.getRuntimeId()) {
        mReliability  = packet.mReliability;
        mPriority     = packet.mPriority;
        mCompressible = packet.mCompressible;
        mSenderSubId  = packet.mSenderSubId;
    }

    [[nodiscard]] PacketRuntimeId getRuntimeId() const { return mRuntimeId; }

    [[nodiscard]] optional_ref<ll::network::Packet const> getPacket() const { return mPacket; }

    MinecraftPacketIds    getId() const override;
    std::string_view      getName() const override;
    void                  write(BinaryStream&) const override;
    Bedrock::Result<void> _read(ReadOnlyBinaryStream&) override;
};

} // namespace ll::network
