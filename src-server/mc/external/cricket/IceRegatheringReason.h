#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceRegatheringReason : int {
    NetworkChange     = 0,
    NetworkFailure    = 1,
    OccasionalRefresh = 2,
    MaxValue          = 3,
};

}
