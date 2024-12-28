#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class XAsyncOp : uint {
    Begin     = 0,
    DoWork    = 1,
    GetResult = 2,
    Cancel    = 3,
    Cleanup   = 4,
};
