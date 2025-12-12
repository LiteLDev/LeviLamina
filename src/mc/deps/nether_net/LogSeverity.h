#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum class LogSeverity : int {
    First        = 0,
    Disabled     = 0,
    CriticalOnly = 1,
    Error        = 2,
    Warning      = 3,
    Information  = 4,
    Verbose      = 5,
    Count        = 6,
};

}
