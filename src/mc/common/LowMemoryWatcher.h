#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // prevent constructor by default
    LowMemoryWatcher& operator=(LowMemoryWatcher const&);
    LowMemoryWatcher(LowMemoryWatcher const&);
    LowMemoryWatcher();

    // private:
    // NOLINTBEGIN
    // symbol: ?mPlatformToldUsLowMemory@LowMemoryWatcher@@0_NA
    MCAPI static bool mPlatformToldUsLowMemory;

    // symbol:
    // ?mPleaseLeakMemory@LowMemoryWatcher@@0V?$list@V?$vector@DV?$allocator@D@std@@@std@@V?$allocator@V?$vector@DV?$allocator@D@std@@@std@@@2@@std@@A
    MCAPI static std::list<std::vector<char>> mPleaseLeakMemory;

    // symbol:
    // ?mTimeToResetWarning@LowMemoryWatcher@@0V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@A
    MCAPI static std::chrono::steady_clock::time_point mTimeToResetWarning;

    // NOLINTEND
};
