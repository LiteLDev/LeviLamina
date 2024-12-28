#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FunctionState : uchar {
    Uninitialized               = 1,
    EngineVersionNotInitialized = 2,
    Valid                       = 3,
};
