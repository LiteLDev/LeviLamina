#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                     mTimeDelay;
    ::ll::TypedStorage<8, 8, double>                     mStartTime;
    ::ll::TypedStorage<8, 64, ::std::function<double()>> mGetCurrentTimeCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BasicTimer(double timeDelay, ::std::function<double()> getTimeCallback);

#ifdef LL_PLAT_C
    MCAPI bool isFinished() const;

    MCAPI void resetTime();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static double getSecondsSinceLaunch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(double timeDelay, ::std::function<double()> getTimeCallback);
    // NOLINTEND
};
