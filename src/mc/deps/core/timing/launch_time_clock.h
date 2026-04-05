#pragma once

#include "mc/_HeaderOutputPredefine.h"

class launch_time_clock {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::chrono::duration<double, ::std::ratio<1, 1>> getSecondsSinceLaunch_DEPRECATED();
#endif

    MCNAPI static ::std::chrono::nanoseconds time_since_launch();
    // NOLINTEND
};
