#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir::Logging {

enum class Severity : int {
    Trace           = 0,
    Debug           = 1,
    Info            = 2,
    Warning         = 3,
    Error           = 4,
    AssertFailure   = 5,
    Critical        = 5,
    SeveritiesCount = 6,
};

}
