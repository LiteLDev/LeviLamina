#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InputMode : int {
    Undefined        = 0x0,
    Mouse            = 0x1,
    Touch            = 0x2,
    GamePad          = 0x3,
    MotionController = 0x4,
};
