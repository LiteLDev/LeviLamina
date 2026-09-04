#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemOnUseResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWasUsed;
    ::ll::TypedStorage<1, 1, bool> mStartUsingHandled;
    // NOLINTEND
};
