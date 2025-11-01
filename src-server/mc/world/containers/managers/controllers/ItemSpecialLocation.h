#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemSpecialLocation : int {
    Invalid = -1,
    Destroy = 0,
    PlayerPosExact = 1,
    PlayerPosNearby = 2,
    Consume = 3,
    Count = 4,
};
