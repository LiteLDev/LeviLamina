#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceCandidatePairState : int {
    Waiting = 0,
    InProgress = 1,
    Succeeded = 2,
    Failed = 3,
};

}
