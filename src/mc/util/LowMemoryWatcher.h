#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& mPlatformToldUsLowMemory();

    MCAPI static ::std::list<::std::vector<char>>& mPleaseLeakMemory();

    MCAPI static ::std::chrono::steady_clock::time_point& mTimeToResetWarning();
    // NOLINTEND
};
