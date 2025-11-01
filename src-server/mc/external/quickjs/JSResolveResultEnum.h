#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSResolveResultEnum : int {
    Exception = -1,
    Found = 0,
    NotFound = 1,
    Circular = 2,
    Ambiguous = 3,
};
