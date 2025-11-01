#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HorseFlags : int {
    // bitfield representation
    Saddle = 1 << 2,
    Eating = 1 << 5,
    Standing = 1 << 6,
    OpenMouth = 1 << 7,
};
