#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UploadState : int {
    Uninitialized = 0,
    Initializing = 1,
    Progress = 2,
    Exporting = 3,
    Done = 4,
    Failed = 5,
};
