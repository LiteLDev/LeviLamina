#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

enum class InteractiveToolError : uchar {
    None             = 0,
    Unsupported      = 1,
    InvalidRequest   = 2,
    SessionNotFound  = 3,
    StaleSession     = 4,
    Busy             = 5,
    NoPreview        = 6,
    TaskFailed       = 7,
    ResultTooLarge   = 8,
    MalformedResult  = 9,
    SessionEnded     = 10,
    DimensionChanged = 11,
};

}
