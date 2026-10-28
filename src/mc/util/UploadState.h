#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UploadState : int {
    Uninitialized = 0,
    Initializing  = 1,
    Progress      = 2,
    Exporting     = 3,
    Processing    = 4,
    Done          = 5,
    Failed        = 6,
};
