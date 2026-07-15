#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LowMemoryWatcher {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void leakMemoryOnPurposeMB(uint64 memory);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::list<::std::vector<char>>& mPleaseLeakMemory();
    // NOLINTEND
};
