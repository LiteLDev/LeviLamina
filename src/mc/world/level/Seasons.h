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
    MCAPI explicit Seasons(class Dimension& d);

    MCAPI void postProcess(class LevelChunk& lc, class BlockSource& region, class ChunkPos const& cp);

    MCAPI void tick();

    MCAPI ~Seasons();

    // NOLINTEND
};
