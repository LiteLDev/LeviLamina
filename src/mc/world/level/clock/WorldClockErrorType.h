#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WorldClockErrorType : int {
    ExceedsWorldClockRegistryCapacity = 0,
    DuplicateWorldClock               = 1,
    ExceedsWorldClockNameLength       = 2,
    InvalidWorldClockName             = 3,
};
