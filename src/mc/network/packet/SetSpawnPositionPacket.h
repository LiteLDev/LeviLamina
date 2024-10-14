#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/SpawnPositionType.h"
#include "mc/platform/Result.h"

class SetSpawnPositionPacket : public ::Packet {
public:
    NetworkBlockPosition mPos;           // this+0x30
    SpawnPositionType    mSpawnPosType;  // this+0x3C
    DimensionType        mDimensionType; // this+0x40
    NetworkBlockPosition mSpawnBlockPos; // this+0x44

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

    MCAPI SetSpawnPositionPacket(
        DimensionType         dimension,
        class BlockPos const& playerPosition,
        class BlockPos const& spawnBlockPos
    );

    MCAPI SetSpawnPositionPacket(::SpawnPositionType spawnPosType, DimensionType dimension, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
