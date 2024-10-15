#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Seasons {
public:
    // prevent constructor by default
    Seasons& operator=(Seasons const&);
    Seasons(Seasons const&);
    Seasons();

public:
    // NOLINTBEGIN
    MCAPI explicit Seasons(class Dimension& dimension);

    MCAPI void postProcess(class LevelChunk& levelChunk, class BlockSource& region, class ChunkPos const& chunkPos);

    MCAPI void tick();

    MCAPI ~Seasons();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Dimension& dimension);

    MCAPI void dtor$();

    // NOLINTEND
};
