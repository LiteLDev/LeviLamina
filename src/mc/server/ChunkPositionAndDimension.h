#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkPositionAndDimension {

public:
    // prevent constructor by default
    ChunkPositionAndDimension& operator=(ChunkPositionAndDimension const&) = delete;
    ChunkPositionAndDimension(ChunkPositionAndDimension const&)            = delete;
    ChunkPositionAndDimension()                                            = delete;
};
