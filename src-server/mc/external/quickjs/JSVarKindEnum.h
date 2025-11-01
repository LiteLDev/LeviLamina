#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSVarKindEnum : int {
    Normal = 0,
    FunctionDecl = 1,
    NewFunctionDecl = 2,
    Catch = 3,
    FunctionName = 4,
    PrivateField = 5,
    PrivateMethod = 6,
    PrivateGetter = 7,
    PrivateSetter = 8,
    PrivateGetterSetter = 9,
};
