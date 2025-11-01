#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSPromiseStateEnum : int {
    Pending   = 0,
    Fulfilled = 1,
    Rejected  = 2,
};
