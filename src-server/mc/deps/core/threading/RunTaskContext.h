#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RunTaskContext : uchar {
    AsyncOnly = 0,
    SchedulerOnly = 1,
    Any = 2,
};
