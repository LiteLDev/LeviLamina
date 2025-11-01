#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BCTagEnum : int {
    Null = 1,
    Undefined = 2,
    BoolFalse = 3,
    BoolTrue = 4,
    Int32 = 5,
    Float64 = 6,
    String = 7,
    Object = 8,
    Array = 9,
    BigInt = 10,
    TemplateObject = 11,
    FunctionBytecode = 12,
    Module = 13,
    TypedArray = 14,
    ArrayBuffer = 15,
    SharedArrayBuffer = 16,
    Date = 17,
    ObjectValue = 18,
    ObjectReference = 19,
};
