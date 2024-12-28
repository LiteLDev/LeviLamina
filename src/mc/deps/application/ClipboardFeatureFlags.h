#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClipboardFeatureFlags : int {
    // bitfield representation
    None              = 0,
    ClipboardSet      = 1 << 0,
    ClipboardGet      = 1 << 1,
    ClipboardAsyncGet = 1 << 2,
};
