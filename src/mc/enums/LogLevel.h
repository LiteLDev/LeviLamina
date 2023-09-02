#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LogLevel : int {
    Verbose = 0x0,
    Info    = 0x1,
    Warning = 0x2,
    Error   = 0x3,
    Count   = 0x4,
};
