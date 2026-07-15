#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicTimeAccumulator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mCount;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mNanoseconds;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mMaxSample;
    // NOLINTEND
};
