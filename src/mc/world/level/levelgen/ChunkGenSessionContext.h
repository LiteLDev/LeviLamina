#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
struct ChunkGenPlayerSnapshot;
// clang-format on

struct ChunkGenSessionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkGenPlayerSnapshot>> mPlayers;
    ::ll::TypedStorage<4, 4, ::DimensionType>                          mDimension;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                            mWorldSeed;
    // NOLINTEND
};
