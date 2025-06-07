#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LeashableUtility {

enum class UnleashReason : int {
    Interaction = 0,
    Broken      = 1,
    Removed     = 2,
    Despawned   = 3,
};

}
