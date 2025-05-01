#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct ChunkPositionAndDimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos>      mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType> mType;
    // NOLINTEND
};
