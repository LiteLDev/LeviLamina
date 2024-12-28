#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DlcPerformanceTier : int {
    None      = 0,
    Sunset    = 1,
    SuperLow  = 2,
    Low       = 3,
    Mid       = 4,
    High      = 5,
    SuperHigh = 6,
    TopTier   = 6,
    Unknown   = 7,
};
