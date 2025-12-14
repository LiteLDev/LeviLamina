#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JoystickState : int {
    Inactive = 0,
    Deciding = 1,
    Tapping  = 2,
    Holding  = 3,
    Move     = 4,
};
