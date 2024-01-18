#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubChunkInitMode : int {
    All                      = 0x0,
    AllButLast               = 0x1,
    None                     = 0x2,
    ClientRequestSystemBlock = 0x3,
    ReplaceWithAllAir        = 0x4,
};
