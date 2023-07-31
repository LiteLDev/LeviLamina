#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionChunkMoveSystem {

public:
    // prevent constructor by default
    DimensionChunkMoveSystem& operator=(DimensionChunkMoveSystem const&) = delete;
    DimensionChunkMoveSystem(DimensionChunkMoveSystem const&)            = delete;
    DimensionChunkMoveSystem()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createDimensionChunkMoveSystem\@DimensionChunkMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDimensionChunkMoveSystem();
    // NOLINTEND
};
