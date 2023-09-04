#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Difficulty : int {
    Peaceful = 0x0,
    Easy     = 0x1,
    Normal   = 0x2,
    Hard     = 0x3,
    Count    = 0x4,
    Unknown  = 0x5,
};
