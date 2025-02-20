#pragma once

#include "mc/_HeaderOutputPredefine.h"

class launch_time_clock {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::chrono::nanoseconds time_since_launch();
    // NOLINTEND
};
