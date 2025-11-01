#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TaskRunResult : int {
    Requeue = 0,
    Done = 1,
    Noop = 2,
};
