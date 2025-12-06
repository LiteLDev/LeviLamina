#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

enum class ValueType : schar {
    NullValue    = 0,
    IntValue     = 1,
    UintValue    = 2,
    RealValue    = 3,
    StringValue  = 4,
    BooleanValue = 5,
    ArrayValue   = 6,
    ObjectValue  = 7,
};

}
