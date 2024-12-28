#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackErrorType : int {
    None                = 0,
    IncompletePackError = 1,
    PackParseError      = 2,
    PackLoadError       = 3,
    UIError             = 4,
    PackSettingsError   = 5,
};
