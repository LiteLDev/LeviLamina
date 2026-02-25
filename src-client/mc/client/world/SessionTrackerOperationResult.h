#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class SessionTrackerOperationResult : int {
    NoChange = 0,
    Added    = 1,
    Updated  = 2,
};

}
