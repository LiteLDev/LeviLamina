#pragma once

#include <memory>
#include <string>

#include "ll/api/network/packet/Packet.h"

#include "mc/network/Packet.h"

namespace ll::network {

class RuntimePacket final : public ::Packet {
    friend class ll::network::Packet;

    std::unique_ptr<ll::network::Packet>    mOwnedPacket;
    optional_ref<ll::network::Packet const> mPacket;
    PacketRuntimeId                         mRuntimeId{};

    RuntimePacket(ll::network::Packet const& packet) : mPacket(packet) {
        mRuntimeId    = packet.getRuntimeId();
        mReliability  = packet.mReliability;
        mPriority     = packet.mPriority;
        mCompressible = packet.mCompressible;
        mSenderSubId  = packet.mSenderSubId;
    }

public:
    RuntimePacket() = default;

    RuntimePacket(std::unique_ptr<ll::network::Packet> packet)
    : mOwnedPacket(std::move(packet)),
      mPacket(mOwnedPacket.get()) {
        if (mPacket) {
            mRuntimeId    = mPacket->getRuntimeId();
            mReliability  = mPacket->mReliability;
            mPriority     = mPacket->mPriority;
            mCompressible = mPacket->mCompressible;
            mSenderSubId  = mPacket->mSenderSubId;
        }
    }

    [[nodiscard]] constexpr PacketRuntimeId getRuntimeId() const { return mRuntimeId; }

    [[nodiscard]] bool           isOwned() const { return mOwnedPacket != nullptr; }
    [[nodiscard]] constexpr bool hasPacket() const { return mPacket.has_value(); }

    [[nodiscard]] constexpr optional_ref<ll::network::Packet const> getPacket() const { return mPacket; }

    [[nodiscard]] constexpr optional_ref<ll::network::Packet> getmOwnedPacket() const { return mOwnedPacket.get(); }

    constexpr void movePacket(std::unique_ptr<ll::network::Packet> newPacket) {
        mOwnedPacket = std::move(newPacket);
        mPacket      = mOwnedPacket.get();
    }

    [[nodiscard]] constexpr std::unique_ptr<ll::network::Packet> releasePacket() {
        mPacket = nullptr;
        return std::move(mOwnedPacket);
    }

private:
    LLNDAPI MinecraftPacketIds getId() const override;
    LLNDAPI std::string_view getName() const override;
    LLAPI void               write(BinaryStream&) const override;
    LLAPI Bedrock::Result<void> _read(ReadOnlyBinaryStream&) override;
};

}; // namespace ll::network
