#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TaskQueuePortStatus : int {
    Active = 0,
    Canceled = 1,
    Terminating = 2,
    Terminated = 3,
};
