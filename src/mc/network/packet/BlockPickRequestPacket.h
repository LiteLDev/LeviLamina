#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BlockPickRequestPacket : public ::Packet {
public:
    BlockPos mPos;      // this+0x30
    bool     mWithData; // this+0x3C
    uchar    mMaxSlots; // this+0x3D

    // prevent constructor by default
    BlockPickRequestPacket& operator=(BlockPickRequestPacket const&);
    BlockPickRequestPacket(BlockPickRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPickRequestPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI BlockPickRequestPacket();

    // NOLINTEND
};
