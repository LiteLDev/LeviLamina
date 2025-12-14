#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mTotalOverLastSecond;
    ::ll::TypedStorage<4, 4, float>                                      mAverageOverLastSecond;
    ::ll::TypedStorage<4, 4, float>                                      mMaximumOverLastSecond;
    ::ll::TypedStorage<4, 4, uint>                                       mNumberOfSamplesInLastSecond;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::chrono::nanoseconds>> mSamples;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastResetTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addSample(::std::chrono::nanoseconds dt);

    MCAPI ~AverageTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
