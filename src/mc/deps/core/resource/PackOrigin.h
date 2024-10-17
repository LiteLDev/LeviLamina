#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackOrigin : schar {
    Unknown          = 0x0,
    RealmsUnknown    = 0x1,
    Package          = 0x2,
    Treatment        = 0x3,
    Dev              = 0x4,
    World            = 0x5,
    User             = 0x6,
    TempCache        = 0x7,
    PremiumCache     = 0x8,
    PremiumTempCache = 0x9,
    Test             = 0xA,
};
