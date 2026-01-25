#pragma once
#include <string>

#include "ll/api/network/packet/Packet.h"

#include "mc/network/Packet.h"

namespace ll::network {

class RuntimePacket : public ::Packet {
public:
    uint64                               mRuntimeId{};
    std::shared_ptr<ll::network::Packet> mPacket;
    RuntimePacket() : mRuntimeId(0), mPacket(nullptr) {}

    RuntimePacket(uint64 runtimeId, std::shared_ptr<ll::network::Packet> packet)
    : mRuntimeId(runtimeId),
      mPacket(std::move(packet)) {
        if (mPacket) {
            mReliability  = mPacket->mReliability;
            mPriority     = mPacket->mPriority;
            mCompressible = mPacket->mCompressible;
        }
    }

    RuntimePacket(uint64 runtimeId, ll::network::Packet const& packet)
    : mRuntimeId(runtimeId),
      mPacket(std::shared_ptr<ll::network::Packet>(const_cast<ll::network::Packet*>(&packet), [](ll::network::Packet*) {
      })) {
        mReliability  = mPacket->mReliability;
        mPriority     = mPacket->mPriority;
        mCompressible = mPacket->mCompressible;
    }

    [[nodiscard]] MinecraftPacketIds getId() const override;
    [[nodiscard]] std::string        getName() const override;
    void                             write(BinaryStream&) const override;
    Bedrock::Result<void>            _read(ReadOnlyBinaryStream&) override;
};

}; // namespace ll::network
