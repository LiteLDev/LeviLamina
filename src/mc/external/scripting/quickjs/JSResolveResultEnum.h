#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSResolveResultEnum : int {
    Exception = 4294967295,
    Found     = 0,
    NotFound  = 1,
    Circular  = 2,
    Ambiguous = 3,
};
