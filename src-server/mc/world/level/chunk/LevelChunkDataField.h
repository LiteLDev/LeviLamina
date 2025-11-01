#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelChunkDataField : int {
    BiomeState   = 0,
    BlockEntity  = 1,
    Entity       = 2,
    PendingTicks = 3,
    BorderBlocks = 4,
    RandomTicks  = 5,
    Count        = 6,
};
