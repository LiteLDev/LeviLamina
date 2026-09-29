#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinMemThresholds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> lowMemMb;
    ::ll::TypedStorage<8, 8, int64> criticalMemMb;
    ::ll::TypedStorage<8, 8, int64> skinCutoffSizeKb;
    // NOLINTEND
};
