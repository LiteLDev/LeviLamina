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
    ::ll::TypedStorage<8, 8, int64>                     mLastMs;
    ::ll::TypedStorage<8, 8, int64>                     mLastMsSysTime;
    ::ll::TypedStorage<4, 4, float>                     mAdjustTime;
    ::ll::TypedStorage<4, 4, int>                       mSteppingTick;
    ::ll::TypedStorage<8, 64, ::std::function<int64()>> mGetTimeMSCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Timer(float ticksPerSecond, ::std::function<int64()> getTimeMSCallback);

    MCAPI void advanceTime(float preferredFrameStep);

    MCAPI uint64 getTicks() const;

    MCAPI float getTimeScale() const;

    MCAPI void resetTimePassed();

    MCAPI void setTimeScale(float timeScale);

    MCAPI void stepTick(int numSteps);

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
