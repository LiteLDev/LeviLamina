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
    // symbol: ??0Timer@@QEAA@MV?$function@$$A6A_JXZ@std@@@Z
    MCAPI Timer(float ticksPerSecond, std::function<int64()> getTimeMSCallback);

    // symbol: ?advanceTime@Timer@@QEAAXM@Z
    MCAPI void advanceTime(float preferredFrameStep);

    // symbol: ?getTicks@Timer@@QEBA_KXZ
    MCAPI uint64 getTicks() const;

    // symbol: ?getTimeScale@Timer@@QEBAMXZ
    MCAPI float getTimeScale() const;

    // symbol: ?resetTimePassed@Timer@@QEAAXXZ
    MCAPI void resetTimePassed();

    // symbol: ?setTimeScale@Timer@@QEAAXM@Z
    MCAPI void setTimeScale(float timeScale);

    // symbol: ?stepTick@Timer@@QEAAXH@Z
    MCAPI void stepTick(int numSteps);

    // symbol: ?stepping@Timer@@QEBA_NXZ
    MCAPI bool stepping() const;

    // NOLINTEND
};
