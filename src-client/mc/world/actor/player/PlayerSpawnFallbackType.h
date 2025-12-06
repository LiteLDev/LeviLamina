#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerSpawnFallbackType : int {
    AboveLeaves  = 0,
    ShallowWater = 1,
    Waterlily    = 2,
    DeepWater    = 3,
    PowderSnow   = 4,
    None         = 5,
};
