#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MovementType : uchar {
    PushPull  = 0,
    Push      = 1,
    Popped    = 2,
    Immovable = 3,
};
