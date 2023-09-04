#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackErrorType : int {
    None                = 0x0,
    IncompletePackError = 0x1,
    PackParseError      = 0x2,
    PackLoadError       = 0x3,
    UIError             = 0x4,
    PackSettingsError   = 0x5,
};
