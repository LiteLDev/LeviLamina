#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_0 {

enum class LiquidReaction : uchar {
    Broken     = 0,
    Popped     = 1,
    Blocking   = 2,
    Noreaction = 3,
};

}
