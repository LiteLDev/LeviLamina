#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OptionResetFlags : int {
    // bitfield representation
    None = 1 << 0,
    KeyboardMouse = 1 << 1,
    Controller = 1 << 2,
    Touch = 1 << 3,
    Video = 1 << 4,
    Audio = 1 << 5,
    Chat = 1 << 6,
    Accessibility = 1 << 7,
    Party = 1 << 8,
    Controls = KeyboardMouse | Controller | Touch,
};
