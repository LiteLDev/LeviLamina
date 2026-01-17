#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class ComparisonFunction : int {
    Never        = 0,
    Less         = 1,
    LessEqual    = 2,
    Greater      = 3,
    GreaterEqual = 4,
    Equal        = 5,
    NotEqual     = 6,
    Always       = 7,
};

}
