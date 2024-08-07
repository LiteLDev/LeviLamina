#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class DimensionDataPacket : public ::Packet {
public:
    DimensionDefinitionGroup mDimensionDefinitionGroup; // this+0x30

    // prevent constructor by default
    DimensionDataPacket& operator=(DimensionDataPacket const&);
    DimensionDataPacket(DimensionDataPacket const&);
    DimensionDataPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DimensionDataPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
