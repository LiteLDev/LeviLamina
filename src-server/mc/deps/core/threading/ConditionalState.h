#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Details {

enum class ConditionalState : int {
    Pending = 0,
    Checking = 1,
    CancelPending = 2,
    Canceled = 3,
    Completed = 4,
};

}
