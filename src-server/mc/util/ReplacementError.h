#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

enum class ReplacementError : int {
    SlotTypeEntityMismatch = 0,
    OutOfBounds            = 1,
    CountExceeded          = 2,
    KeepFailed             = 3,
    Unknown                = 4,
    None                   = 5,
};

}
