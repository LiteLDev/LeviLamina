#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSErrorEnum : int {
    EvalError = 0,
    RangeError = 1,
    ReferenceError = 2,
    SyntaxError = 3,
    TypeError = 4,
    UriError = 5,
    InternalError = 6,
    AggregateError = 7,
    NativeErrorCount = 8,
};
