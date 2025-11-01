#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ProviderCleanupLocation : int {
    Destructor = 0,
    AfterDoWork = 1,
    InCancel = 2,
    CleanedUp = 3,
};
