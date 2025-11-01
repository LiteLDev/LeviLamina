#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MicroProfileCounterFlags : int {
    // bitfield representation
    InternalMask  = -4,
    None          = 0,
    Detailed      = 1 << 0,
    DetailedGraph = 1 << 1,
    HasLimit      = 1 << 2,
    Closed        = 1 << 3,
    ManualSwap    = 1 << 4,
    Leaf          = 1 << 5,
};
