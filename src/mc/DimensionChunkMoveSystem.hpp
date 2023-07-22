/**
 * @file  DimensionChunkMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionChunkMoveSystem.
 *
 */
class DimensionChunkMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONCHUNKMOVESYSTEM
public:
    class DimensionChunkMoveSystem& operator=(class DimensionChunkMoveSystem const &) = delete;
    DimensionChunkMoveSystem(class DimensionChunkMoveSystem const &) = delete;
    DimensionChunkMoveSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createDimensionChunkMoveSystem\@DimensionChunkMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDimensionChunkMoveSystem();

};