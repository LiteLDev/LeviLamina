#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSOverloadableOperatorEnum : int {
    Add         = 0,
    Sub         = 1,
    Mul         = 2,
    Div         = 3,
    Mod         = 4,
    Pow         = 5,
    Or          = 6,
    And         = 7,
    Xor         = 8,
    Shl         = 9,
    Sar         = 10,
    Shr         = 11,
    Eq          = 12,
    Less        = 13,
    BinaryCount = 14,
    Pos         = 14,
    Neg         = 15,
    Inc         = 16,
    Dec         = 17,
    Not         = 18,
    Count       = 19,
};
