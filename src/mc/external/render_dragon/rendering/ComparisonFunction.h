#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class ComparisonFunction : uchar {
    None         = 0,
    Never        = 1,
    Less         = 2,
    Equal        = 3,
    LessEqual    = 4,
    Greater      = 5,
    NotEqual     = 6,
    GreaterEqual = 7,
    Always       = 8,
};

}
