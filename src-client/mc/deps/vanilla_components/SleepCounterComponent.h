#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SleepCounterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mSleepCounter;
    ::ll::TypedStorage<2, 2, short> mPrevSleepCounter;
    // NOLINTEND
};
