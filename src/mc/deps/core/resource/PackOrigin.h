#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackOrigin : uchar {
    Unknown          = 0,
    RealmsUnknown    = 1,
    Package          = 2,
    Treatment        = 3,
    Dev              = 4,
    World            = 5,
    User             = 6,
    TempCache        = 7,
    PremiumCache     = 8,
    PremiumTempCache = 9,
    Test             = 10,
};
