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
    BasicTimer& operator=(BasicTimer const&);
    BasicTimer(BasicTimer const&);
    BasicTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BasicTimer(double timeDelay, ::std::function<double()> getTimeCallback);

    MCAPI bool isFinished() const;

    MCAPI void resetTime();

    MCAPI ~BasicTimer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static double getSecondsSinceLaunch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(double timeDelay, ::std::function<double()> getTimeCallback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
