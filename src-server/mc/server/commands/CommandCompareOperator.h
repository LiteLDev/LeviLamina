#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandCompareOperator : uchar {
    Invalid = 0,
    Equals = 1,
    LessThan = 2,
    GreaterThan = 3,
    LessThanEquals = 4,
    GreaterThanEquals = 5,
};
