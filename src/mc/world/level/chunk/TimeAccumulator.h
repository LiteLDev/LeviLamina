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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TimeAccumulator();

    MCAPI void addTime(::std::chrono::nanoseconds const& time);

    MCFOLD uint64 getCount() const;

    MCAPI float getTimeSumAverageMS() const;

    MCAPI float getTimeSumAverageSeconds() const;

    MCAPI float getTimeSumSeconds() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
