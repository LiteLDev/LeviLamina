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
    // symbol: ??0Timer@@QEAA@MV?$function@$$A6A_JXZ@std@@@Z
    MCAPI Timer(float ticksPerSecond, std::function<int64(void)> getTimeMSCallback);

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
