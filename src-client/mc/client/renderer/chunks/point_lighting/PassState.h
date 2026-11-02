#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting::Detail {

enum class PassState : int {
    Idle            = 0,
    RefreshInFlight = 1,
    Prefetching     = 2,
    Staged          = 3,
};

}
