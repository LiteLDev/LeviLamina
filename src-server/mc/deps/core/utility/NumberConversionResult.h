#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

enum class NumberConversionResult : int {
    Succeed = 0,
    Invalid = 1,
    TooSmall = 2,
    TooLarge = 3,
    Count = 4,
};

}
