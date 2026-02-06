#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InstantiationResult : uchar {
    FailCopy         = 0,
    FailVerification = 1,
    FailFinalize     = 2,
    Success          = 3,
};
