#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkPositionAndDimension {
public:
    // prevent constructor by default
    ChunkPositionAndDimension& operator=(ChunkPositionAndDimension const&);
    ChunkPositionAndDimension(ChunkPositionAndDimension const&);
    ChunkPositionAndDimension();
};
