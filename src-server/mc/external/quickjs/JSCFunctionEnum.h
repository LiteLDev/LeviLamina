#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSCFunctionEnum : int {
    Generic                = 0,
    GenericMagic           = 1,
    Constructor            = 2,
    ConstructorMagic       = 3,
    ConstructorOrFunc      = 4,
    ConstructorOrFuncMagic = 5,
    FF                     = 6,
    FFF                    = 7,
    Getter                 = 8,
    Setter                 = 9,
    GetterMagic            = 10,
    SetterMagic            = 11,
    IteratorNext           = 12,
};
