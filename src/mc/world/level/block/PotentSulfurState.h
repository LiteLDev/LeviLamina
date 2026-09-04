#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PotentSulfurState : int {
    Dry        = 0,
    Wet        = 1,
    Dormant    = 2,
    Erupting   = 3,
    Continuous = 4,
    Count      = 5,
};
