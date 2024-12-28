#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CompoundTagUpdaterResult : int {
    Success        = 0,
    NoUpdateNeeded = 1,
    Failed         = 2,
};
