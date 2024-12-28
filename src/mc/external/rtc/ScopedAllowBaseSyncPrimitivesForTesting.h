#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ScopedAllowBaseSyncPrimitivesForTesting {
public:
    // prevent constructor by default
    ScopedAllowBaseSyncPrimitivesForTesting& operator=(ScopedAllowBaseSyncPrimitivesForTesting const&);
    ScopedAllowBaseSyncPrimitivesForTesting(ScopedAllowBaseSyncPrimitivesForTesting const&);
    ScopedAllowBaseSyncPrimitivesForTesting();
};

} // namespace rtc
