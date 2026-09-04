#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeAccumulator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mCount;
    ::ll::TypedStorage<8, 8, uint64> mNanoseconds;
    ::ll::TypedStorage<8, 8, uint64> mMaxSample;
    // NOLINTEND
};
