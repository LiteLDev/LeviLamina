#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

enum class MouseCursorIconType : int {
    Default    = 0,
    Wait       = 1,
    Crosshair  = 2,
    Move       = 3,
    NotAllowed = 4,
};

}
