#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Timer {
public:
    // prevent constructor by default
    Timer& operator=(Timer const&);
    Timer(Timer const&);
    Timer();

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
