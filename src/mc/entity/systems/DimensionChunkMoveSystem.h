#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionChunkMoveSystem {
public:
    // prevent constructor by default
    DimensionChunkMoveSystem& operator=(DimensionChunkMoveSystem const&);
    DimensionChunkMoveSystem(DimensionChunkMoveSystem const&);
    DimensionChunkMoveSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createDimensionChunkMoveSystem();

    // NOLINTEND
};
