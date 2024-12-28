#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ImportFailure : int {
    UnknownFileType = 0,
    Duplicate       = 1,
    MalformedZip    = 2,
    Default         = 3,
    Incompatible    = 4,
    Cancelled       = 5,
};
