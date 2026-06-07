#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SpawnPositionType.h"
#include "mc/world/level/BlockPos.h"

struct SetSpawnPositionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>         mPos;
    ::ll::TypedStorage<4, 4, ::SpawnPositionType> mSpawnPosType;
    ::ll::TypedStorage<4, 4, ::DimensionType>     mDimensionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>         mSpawnBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSpawnPositionPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetSpawnPositionPacketPayload(
        ::DimensionType   dimension,
        ::BlockPos const& playerPosition,
        ::BlockPos const& spawnBlockPos
    );

    MCAPI
    SetSpawnPositionPacketPayload(::SpawnPositionType spawnPosType, ::DimensionType dimension, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DimensionType dimension, ::BlockPos const& playerPosition, ::BlockPos const& spawnBlockPos);

    MCAPI void* $ctor(::SpawnPositionType spawnPosType, ::DimensionType dimension, ::BlockPos const& pos);
    // NOLINTEND
};
