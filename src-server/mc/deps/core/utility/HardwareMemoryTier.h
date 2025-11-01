#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HardwareMemoryTier : uchar {
    Tier0 = 0,
    Tier1 = 1,
    Tier2 = 2,
    Tier3 = 3,
    Tier4 = 4,
    Tier5 = 5,
    Count = 6,
};
