#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class BlockActorDataPacket : public ::Packet {
public:
    NetworkBlockPosition mPos;  // this+0x2c
    CompoundTag          mData; // this+0x38

    // prevent constructor by default
    BlockActorDataPacket& operator=(BlockActorDataPacket const&);
    BlockActorDataPacket(BlockActorDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockActorDataPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI BlockActorDataPacket();

    MCAPI BlockActorDataPacket(class BlockPos const& pos, class CompoundTag tag);

    // NOLINTEND
};
