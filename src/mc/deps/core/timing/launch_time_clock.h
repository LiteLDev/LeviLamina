#pragma once

#include "mc/_HeaderOutputPredefine.h"

class launch_time_clock {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::chrono::duration<double, ::std::ratio<1, 1>> getSecondsSinceLaunch_DEPRECATED();

    MCNAPI static ::std::chrono::nanoseconds time_since_launch();
    // NOLINTEND
};
