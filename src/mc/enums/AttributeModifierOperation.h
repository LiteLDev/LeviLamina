#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AttributeModifierOperation : int {
    addition      = 0x0,
    MultiplyBase  = 0x1,
    MultiplyTotal = 0x2,
    Cap           = 0x3,
    Invalid       = 0x4,
    Count         = Invalid,
};
