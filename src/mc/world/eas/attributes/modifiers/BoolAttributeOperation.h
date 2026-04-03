#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

enum class BoolAttributeOperation : int {
    Override   = 0,
    AlphaBlend = 1,
    And        = 2,
    Nand       = 3,
    Or         = 4,
    Nor        = 5,
    Xor        = 6,
    Xnor       = 7,
};

}
