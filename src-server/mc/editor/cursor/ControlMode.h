#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor {

enum class ControlMode : int {
    Keyboard = 0,
    Mouse = 1,
    KeyboardAndMouse = 2,
    Fixed = 3,
};

}
