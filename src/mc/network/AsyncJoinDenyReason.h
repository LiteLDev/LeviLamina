#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AsyncJoinDenyReason : uchar {
    Unknown         = 0,
    Timeout         = 1,
    Error           = 2,
    Kick            = 3,
    NoAction        = 4,
    NoExplicitAllow = 5,
};
