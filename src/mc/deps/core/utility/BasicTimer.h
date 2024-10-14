#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicTimer {
public:
    double                  mTimeDelay;
    double                  mStartTime;
    std::function<double()> mGetCurrentTimeCallback;

public:
    // prevent constructor by default
    BasicTimer() = delete;

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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
