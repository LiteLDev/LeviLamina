#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class InvalidArgumentErrorType : uchar {
    Unspecified = 0,
    Empty       = 1,
    Unknown     = 2,
    Duplicate   = 3,
};

}
