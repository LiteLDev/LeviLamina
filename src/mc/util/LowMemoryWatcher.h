#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::list<::std::vector<char>>& mPleaseLeakMemory();
    // NOLINTEND
};
