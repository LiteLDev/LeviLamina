#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/ChunkPos.h"

struct ChunkPositionAndDimension {
public:
    ChunkPos      mPos;  // this+0x0
    DimensionType mType; // this+0x8
};
