#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OperatorType : uchar {
    None  = 0,
    And   = 1,
    Or    = 2,
    Gt    = 3,
    Lt    = 4,
    Eq    = 5,
    Plus  = 6,
    Minus = 7,
    Mult  = 8,
    Div   = 9,
    Not   = 10,
};
