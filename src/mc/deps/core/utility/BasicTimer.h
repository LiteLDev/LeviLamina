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
    MCAPI BasicTimer(double timeDelay, std::function<double()> getTimeCallback);

    MCAPI bool isFinished() const;

    MCAPI void resetTime();

    MCAPI ~BasicTimer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(double timeDelay, std::function<double()> getTimeCallback);

    MCAPI void dtor$();

    // NOLINTEND
};
