#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilderExecutionState {

enum class CodeStatus : int {
    None       = 0x0,
    NotStarted = 0x1,
    InProgress = 0x2,
    Paused     = 0x3,
    Error      = 0x4,
    Succeeded  = 0x5
};
};
