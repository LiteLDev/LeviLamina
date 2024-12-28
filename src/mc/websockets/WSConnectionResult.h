#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WSConnectionResult : uchar {
    Failed               = 0,
    InvalidUri           = 1,
    ConnectionInProgress = 2,
    Success              = 3,
};
