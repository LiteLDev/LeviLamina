#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandParameterDataType : int {
    Basic    = 0x0,
    Enum     = 0x1,
    SoftEnum = 0x2,
    Postfix  = 0x3,
};
