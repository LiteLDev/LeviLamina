#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BlockEventPacket : public ::Packet {
public:
    NetworkBlockPosition mPos; // this+0x2c
    int                  mB0;  // this+0x38
    int                  mB1;  // this+0x3c

    // prevent constructor by default
    BlockEventPacket& operator=(BlockEventPacket const&);
    BlockEventPacket(BlockEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI BlockEventPacket();

    MCAPI BlockEventPacket(class BlockPos pos, int b0, int b1);

    // NOLINTEND
};
