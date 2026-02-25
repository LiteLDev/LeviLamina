#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WorldVerificationResult : uchar {
    Valid    = 0,
    Invalid  = 1,
    Canceled = 2,
};
