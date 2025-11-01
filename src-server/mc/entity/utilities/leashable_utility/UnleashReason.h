#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LeashableUtility {

enum class UnleashReason : int {
    Interaction = 0,
    Broken      = 1,
    Sheared     = 2,
    Removed     = 3,
    Despawned   = 4,
};

}
