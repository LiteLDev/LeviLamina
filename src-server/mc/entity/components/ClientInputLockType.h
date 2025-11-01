#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientInputLockType : uchar {
    Undefined    = 0,
    Move         = 1,
    Jump         = 2,
    Sneak        = 3,
    Mount        = 4,
    Dismount     = 5,
    FreeLook     = 6,
    MoveLeft     = 7,
    MoveRight    = 8,
    MoveForward  = 9,
    MoveBackward = 10,
    Count        = 11,
};
