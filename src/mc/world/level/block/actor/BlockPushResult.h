#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockPushResult : uchar {
    LeftInPlace        = 0,
    Pushed             = 1,
    PushedFallingBlock = 2,
    Hurt               = 3,
};
