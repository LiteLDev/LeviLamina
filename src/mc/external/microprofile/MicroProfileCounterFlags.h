#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MicroProfileCounterFlags : int {
    None          = 0,
    Detailed      = 1,
    DetailedGraph = 2,
    InternalMask  = 4294967292,
    HasLimit      = 4,
    Closed        = 8,
    ManualSwap    = 16,
    Leaf          = 32,
};
