#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ExprTokenType : uchar {
    Unknown    = 0,
    Literal    = 1,
    Variable   = 2,
    Operator   = 3,
    Expression = 4,
    Property   = 5,
};
