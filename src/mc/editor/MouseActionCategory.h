#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

enum class MouseActionCategory : int {
    Invalid = 0,
    Button  = 1,
    Wheel   = 2,
    Drag    = 3,
};

}
