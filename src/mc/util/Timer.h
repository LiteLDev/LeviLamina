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
    // prevent constructor by default
    Timer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Timer(float ticksPerSecond, ::std::function<int64()> getTimeMSCallback);

    MCAPI void advanceTime(float preferredFrameStep);

#ifdef LL_PLAT_C
    MCFOLD float getAlpha() const;
#endif

    MCAPI uint64 getTicks() const;

#ifdef LL_PLAT_C
    MCFOLD float getTime() const;
#endif

    MCFOLD float getTimeScale() const;

    MCAPI int popOverflowTicks();

    MCAPI void resetTimePassed();

    MCAPI void setTimeScale(float timeScale);

    MCAPI void stepTick(int numSteps);

#ifdef LL_PLAT_C
    MCAPI void stepTick(float numSteps);
#endif

    MCAPI bool stepping() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int64 getMillisecondsSinceLaunch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float ticksPerSecond, ::std::function<int64()> getTimeMSCallback);
    // NOLINTEND
};
