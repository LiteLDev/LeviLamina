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

    MCAPI_C bool hasExpired() const;

    MCAPI_C void resetTime();

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
    MCFOLD void $dtor();
    // NOLINTEND
};
