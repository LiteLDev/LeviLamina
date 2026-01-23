#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorSwingSource : uchar {
    None      = 0,
    Build     = 1,
    Mine      = 2,
    Interact  = 3,
    Attack    = 4,
    UseItem   = 5,
    ThrowItem = 6,
    DropItem  = 7,
    Event     = 8,
};
