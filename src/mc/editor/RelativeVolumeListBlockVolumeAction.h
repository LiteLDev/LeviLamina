#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class RelativeVolumeListBlockVolumeAction : int {
    None        = 0,
    Add         = 1,
    Remove      = 2,
    Clear       = 3,
    Set         = 4,
    Translate   = 5,
    MoveTo      = 6,
    SetOrigin   = 7,
    ClearOrigin = 8,
};

}
