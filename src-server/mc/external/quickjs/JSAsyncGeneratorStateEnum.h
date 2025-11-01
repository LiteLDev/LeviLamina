#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSAsyncGeneratorStateEnum : int {
    SuspendedStart = 0,
    SuspendedYield = 1,
    SuspendedYieldStar = 2,
    Executing = 3,
    AwaitingReturn = 4,
    Completed = 5,
};
