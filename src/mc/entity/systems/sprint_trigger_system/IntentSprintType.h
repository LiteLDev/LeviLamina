#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SprintTriggerSystem {

enum class IntentSprintType : int {
    SprintInput     = 0,
    SprintDoubleTap = 1,
    DoubleTapReset  = 2,
    NoIntent        = 3,
};

}
