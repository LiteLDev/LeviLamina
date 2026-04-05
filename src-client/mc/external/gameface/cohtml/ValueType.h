#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class ValueType : int {
    Null      = 0,
    Undefined = 1,
    Boolean   = 2,
    Number    = 3,
    String    = 4,
    Object    = 5,
    Array     = 6,
    Count     = 7,
};

}
