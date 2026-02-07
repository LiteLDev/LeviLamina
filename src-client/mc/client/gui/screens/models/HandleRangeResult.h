#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HandleRangeResult : int {
    NotHandled   = 0,
    Handled      = 1,
    UnknownRetry = 2,
};
