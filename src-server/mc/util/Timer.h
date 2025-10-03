#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Timer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mTicksPerSecond;
    ::ll::TypedStorage<4, 4, int>                       mTicks;
    ::ll::TypedStorage<4, 4, float>                     mAlpha;
    ::ll::TypedStorage<4, 4, float>                     mTimeScale;
    ::ll::TypedStorage<4, 4, float>                     mPassedTime;
    ::ll::TypedStorage<4, 4, float>                     mFrameStepAlignmentRemainder;
    ::ll::TypedStorage<4, 4, float>                     mLastTimeSeconds;
    ::ll::TypedStorage<4, 4, float>                     mLastTimestep;
    ::ll::TypedStorage<4, 4, float>                     mOverflowTime;
    ::ll::TypedStorage<8, 8, int64>                     mLastMs;
    ::ll::TypedStorage<8, 8, int64>                     mLastMsSysTime;
    ::ll::TypedStorage<4, 4, float>                     mAdjustTime;
    ::ll::TypedStorage<4, 4, float>                     mSteppingTick;
    ::ll::TypedStorage<8, 64, ::std::function<int64()>> mGetTimeMSCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void advanceTime(float preferredFrameStep);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int64 getMillisecondsSinceLaunch();
    // NOLINTEND
};
