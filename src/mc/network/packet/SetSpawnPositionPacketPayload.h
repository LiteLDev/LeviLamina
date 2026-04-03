#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/packet/SpawnPositionType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct SetSpawnPositionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>         mPos;
    ::ll::TypedStorage<4, 4, ::SpawnPositionType> mSpawnPosType;
    ::ll::TypedStorage<4, 4, ::DimensionType>     mDimensionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>         mSpawnBlockPos;
    // NOLINTEND
};
