#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelChunkDataField : int {
    BiomeState      = 0,
    BlockEntity     = 1,
    Entity          = 2,
    PendingTicks    = 3,
    NamedTicks      = 4,
    BorderBlocks    = 5,
    RandomTicks     = 6,
    NeighborChanges = 7,
    Count           = 8,
};
