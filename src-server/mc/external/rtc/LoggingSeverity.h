#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class LoggingSeverity : int {
    Verbose = 0,
    Info    = 1,
    Warning = 2,
    Error   = 3,
    None    = 4,
};

}
