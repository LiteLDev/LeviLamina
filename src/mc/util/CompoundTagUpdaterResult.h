#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CompoundTagUpdaterResult : int {
    Success        = 0x0,
    NoUpdateNeeded = 0x1,
    Failed         = 0x2,
};
