#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TouchTurnState : int {
    Inactive = 0,
    Deciding = 1,
    Turn     = 2,
    Hold     = 3,
    Tap      = 4,
};
