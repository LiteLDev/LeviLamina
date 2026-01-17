#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class BlendingOp : int {
    Add             = 1,
    Subtract        = 2,
    ReverseSubtract = 3,
    Min             = 4,
    Max             = 5,
};

}
