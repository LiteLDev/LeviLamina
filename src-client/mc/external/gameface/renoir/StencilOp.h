#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class StencilOp : int {
    Keep          = 0,
    Zero          = 1,
    Replace       = 2,
    Invert        = 3,
    Increment     = 4,
    Decrement     = 5,
    IncrementWrap = 6,
    DecrementWrap = 7,
};

}
