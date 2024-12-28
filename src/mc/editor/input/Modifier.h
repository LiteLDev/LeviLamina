#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

enum class Modifier : int {
    // bitfield representation
    Unused  = 0,
    None    = 1 << 0,
    Alt     = 1 << 1,
    Control = 1 << 2,
    Shift   = 1 << 3,
    Any     = None | Alt | Control | Shift,
};

}
