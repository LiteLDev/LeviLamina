#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateBlockPacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateBlockPacket& operator=(UpdateBlockPacket const&);
    UpdateBlockPacket(UpdateBlockPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateBlockPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateBlockPacket();

    MCAPI UpdateBlockPacket(class BlockPos const& pos, uint layer, uint runtimeId, uchar updateFlags);

    // NOLINTEND
};
