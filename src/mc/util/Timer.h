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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Timer();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Timer(float ticksPerSecond, ::std::function<int64()> getTimeMSCallback);
#endif

    MCAPI void advanceTime(float preferredFrameStep);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int64 getMillisecondsSinceLaunch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(float ticksPerSecond, ::std::function<int64()> getTimeMSCallback);
#endif
    // NOLINTEND
};
