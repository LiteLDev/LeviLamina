#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BehaviorStatus : int {
    Success = 0,
    Running = 1,
    Failure = 2,
    Error = 3,
    Undefined = 4,
};
