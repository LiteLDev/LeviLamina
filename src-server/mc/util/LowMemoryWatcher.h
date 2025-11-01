#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::list<::std::vector<char>>& mPleaseLeakMemory();
    // NOLINTEND

};
