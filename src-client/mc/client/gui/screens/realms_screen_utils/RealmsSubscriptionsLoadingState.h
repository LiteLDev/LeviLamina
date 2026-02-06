#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RealmsScreenUtils {

enum class RealmsSubscriptionsLoadingState : int {
    DoLoad  = 0,
    Loading = 1,
    Failed  = 2,
    Done    = 3,
};

}
