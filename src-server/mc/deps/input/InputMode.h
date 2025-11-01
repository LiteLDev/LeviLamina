#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InputMode : uint {
    Undefined = 0,
    Mouse = 1,
    Touch = 2,
    GamePad = 3,
    MotionControllerDeprecated = 4,
    Count = 5,
};
