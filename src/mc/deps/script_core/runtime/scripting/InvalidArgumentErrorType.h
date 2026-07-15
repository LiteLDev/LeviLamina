#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class InvalidArgumentErrorType : uchar {
    Unspecified      = 0,
    Empty            = 1,
    Duplicate        = 2,
    InvalidType      = 3,
    UnsupportedValue = 4,
    Unknown          = 5,
};

}
