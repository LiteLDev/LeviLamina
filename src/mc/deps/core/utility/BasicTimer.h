#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicTimer {
public:
    // prevent constructor by default
    BasicTimer& operator=(BasicTimer const&);
    BasicTimer(BasicTimer const&);
    BasicTimer();

public:
    // NOLINTBEGIN
    // symbol: ??0BasicTimer@@QEAA@NV?$function@$$A6ANXZ@std@@@Z
    MCAPI BasicTimer(double timeDelay, std::function<double()> getTimeCallback);

    // symbol: ?isFinished@BasicTimer@@QEBA_NXZ
    MCAPI bool isFinished() const;

    // symbol: ?resetTime@BasicTimer@@QEAAXXZ
    MCAPI void resetTime();

    // symbol: ??1BasicTimer@@QEAA@XZ
    MCAPI ~BasicTimer();

    // NOLINTEND
};
