#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverflowTickComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mAccumulatedTicks;
    // NOLINTEND
};
