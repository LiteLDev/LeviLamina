#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SpawnPositionType.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"

class SetSpawnPositionPacket : public ::Packet {
public:
    // prevent constructor by default
    SetSpawnPositionPacket& operator=(SetSpawnPositionPacket const&);
    SetSpawnPositionPacket(SetSpawnPositionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetSpawnPositionPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetSpawnPositionPacket();

    MCAPI SetSpawnPositionPacket(DimensionType dimension, class BlockPos const& playerPosition, class BlockPos const&);

    MCAPI SetSpawnPositionPacket(::SpawnPositionType spawnPosType, DimensionType dimension, class BlockPos const& pos);

    // NOLINTEND
};
