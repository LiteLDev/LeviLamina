#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StorageMigrationState : int {
    Uninitialized       = 0,
    Detecting           = 1,
    Initializing        = 2,
    InsufficientSpace   = 3,
    ReadyToStart        = 4,
    ReadyToResume       = 5,
    InProgress          = 6,
    InProgressWithError = 7,
    HaltedOnError       = 8,
    Complete            = 9,
};
