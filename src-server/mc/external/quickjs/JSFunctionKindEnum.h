#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSFunctionKindEnum : int {
    Normal = 0,
    Generator = 1,
    Async = 2,
    AsyncGenerator = 3,
};
