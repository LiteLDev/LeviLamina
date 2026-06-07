#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

struct ChunkPositionAndDimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos>      mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType> mType;
    // NOLINTEND
};
