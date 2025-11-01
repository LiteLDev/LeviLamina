#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LiquidReaction : uchar {
    Broken = 0,
    Popped = 1,
    Blocking = 2,
    Noreaction = 3,
};
