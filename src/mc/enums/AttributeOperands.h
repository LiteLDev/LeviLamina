#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AttributeOperands : int {
    Min            = 0x0,
    Max            = 0x1,
    OperandCurrent = 0x2,
    Invalid        = 0x3,
    Count          = Invalid,
};
