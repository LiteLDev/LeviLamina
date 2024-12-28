#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RawInputType : schar {
    None                    = 0,
    MouseButton             = 1,
    MouseWheelUp            = 2,
    MouseWheelDown          = 3,
    Keyboard                = 4,
    GamepadButton           = 5,
    GamepadTrigger          = 6,
    MotionControllerButton  = 7,
    MotionControllerTrigger = 8,
};
