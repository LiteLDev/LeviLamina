#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionChunkMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONCHUNKMOVESYSTEM
public:
    DimensionChunkMoveSystem& operator=(DimensionChunkMoveSystem const&) = delete;
    DimensionChunkMoveSystem(DimensionChunkMoveSystem const&)            = delete;
    DimensionChunkMoveSystem()                                           = delete;
#endif

public:
    /**
     * @symbol ?createDimensionChunkMoveSystem\@DimensionChunkMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDimensionChunkMoveSystem();
};
