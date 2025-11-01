#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSParseFunctionEnum : int {
    Statement = 0,
    Var = 1,
    Expr = 2,
    Arrow = 3,
    Getter = 4,
    Setter = 5,
    Method = 6,
    ClassStaticInit = 7,
    ClassConstructor = 8,
    DerivedClassConstructor = 9,
};
