#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SafeZoneBuffer : int {
    // bitfield representation
    OuterTop    = 1 << 0,
    OuterRight  = 1 << 1,
    OuterBottom = 1 << 2,
    OuterLeft   = 1 << 3,
    InnerTop    = 1 << 4,
    InnerRight  = 1 << 5,
    InnerBottom = 1 << 6,
    InnerLeft   = 1 << 7,
};
