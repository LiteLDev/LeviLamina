#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandOperator : char {
    Invalid      = 0x0,
    Equals       = 0x1,
    PlusEquals   = 0x2,
    MinusEquals  = 0x3,
    TimesEquals  = 0x4,
    DivideEquals = 0x5,
    ModEquals    = 0x6,
    MinEquals    = 0x7,
    MaxEquals    = 0x8,
    Swap         = 0x9,
};
