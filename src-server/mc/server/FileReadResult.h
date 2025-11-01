#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FileReadResult : int {
    Success          = 0,
    FailedToOpenFile = 1,
    Malformed        = 2,
};
