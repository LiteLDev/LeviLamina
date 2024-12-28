#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubChunkInitMode : int {
    All                      = 0,
    AllButLast               = 1,
    None                     = 2,
    ClientRequestSystemBlock = 3,
    ReplaceWithAllAir        = 4,
};
