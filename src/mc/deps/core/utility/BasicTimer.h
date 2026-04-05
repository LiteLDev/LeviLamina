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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BasicTimer();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    BasicTimer& operator=(BasicTimer const&);
    BasicTimer(BasicTimer const&);
    BasicTimer();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI BasicTimer(double timeDelay, ::std::function<double()> getTimeCallback);

#ifdef LL_PLAT_C
    MCAPI bool hasExpired() const;

    MCAPI ::BasicTimer& operator=(::BasicTimer&&);

    MCAPI void resetTime();
#endif

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
