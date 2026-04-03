#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

enum class ColorAttributeOperation : int {
    Override   = 0,
    AlphaBlend = 1,
    Add        = 2,
    Subtract   = 3,
    Multiply   = 4,
};

}
