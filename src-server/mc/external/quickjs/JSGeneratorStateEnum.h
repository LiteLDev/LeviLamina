#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSGeneratorStateEnum : int {
    SuspendedStart = 0,
    SuspendedYield = 1,
    SuspendedYieldStar = 2,
    Executing = 3,
    Completed = 4,
};
