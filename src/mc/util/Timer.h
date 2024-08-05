#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Timer {
public:
    float                      mTicksPerSecond;              // this+0x0
    int                        mTicks;                       // this+0x4
    float                      mAlpha;                       // this+0x8
    float                      mTimeScale;                   // this+0xC
    float                      mPassedTime;                  // this+0x10
    float                      mFrameStepAlignmentRemainder; // this+0x14
    float                      mLastTimeSeconds;             // this+0x18
    float                      mLastTimestep;                // this+0x1C
    int64                      mLastMs;                      // this+0x20
    int64                      mLastMsSysTime;               // this+0x28
    float                      mAdjustTime;                  // this+0x30
    int                        mSteppingTick;                // this+0x34
    std::function<int64(void)> mGetTimeMSCallback;           // this+0x38

    static constexpr const int   MAX_TICKS_PER_UPDATE = 10;   // constant
    static constexpr const float MAX_TIME_PER_UPDATE  = 0.1f; // constant

public:
    // NOLINTBEGIN
    MCAPI Timer(float ticksPerSecond, std::function<int64()> getTimeMSCallback);

    MCAPI void advanceTime(float preferredFrameStep);

    MCAPI uint64 getTicks() const;

    MCAPI float getTimeScale() const;

    MCAPI void resetTimePassed();

    MCAPI void setTimeScale(float timeScale);

    MCAPI void stepTick(int numSteps);

    MCAPI bool stepping() const;

    // NOLINTEND
};
