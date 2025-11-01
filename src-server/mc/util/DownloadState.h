#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DownloadState : int {
    Uninitialized = 0,
    Initializing = 1,
    Progress = 2,
    Importing = 3,
    Done = 4,
    ErrorOccurred = 5,
    Failed = 6,
};
