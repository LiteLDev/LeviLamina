#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

enum class LogLevel : int {
    // bitfield representation
    Verbose = 1 << 0,
    Info    = 1 << 1,
    Warning = 1 << 2,
    Error   = 1 << 3,
};

}
