#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TextCharEventResult : int {
    None             = 0,
    EnterPressed     = 1,
    BackspacePressed = 2,
    Success          = 3,
    Failed           = 4,
};
