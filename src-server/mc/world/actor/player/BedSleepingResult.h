#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BedSleepingResult : int {
    Ok              = 0,
    NotPossibleHere = 1,
    NotPossibleNow  = 2,
    TooFarAway      = 3,
    OtherProblem    = 4,
    NotSafe         = 5,
    BedObstructed   = 6,
};
