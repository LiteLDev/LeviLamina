#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ProcessExecutionState : int {
    Running     = 1,
    Constrained = 2,
    Suspended   = 3,
};
