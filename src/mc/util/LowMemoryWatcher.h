#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // prevent constructor by default
    LowMemoryWatcher& operator=(LowMemoryWatcher const&);
    LowMemoryWatcher(LowMemoryWatcher const&);
    LowMemoryWatcher();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static bool& mPlatformToldUsLowMemory();

    MCAPI static std::list<std::vector<char>>& mPleaseLeakMemory();

    MCAPI static std::chrono::steady_clock::time_point& mTimeToResetWarning();

    // NOLINTEND
};
