#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static bool& mPlatformToldUsLowMemory();

    MCNAPI static ::std::list<::std::vector<char>>& mPleaseLeakMemory();

    MCNAPI_C static ::std::chrono::steady_clock::time_point& mTimeToResetWarning();
    // NOLINTEND
};
