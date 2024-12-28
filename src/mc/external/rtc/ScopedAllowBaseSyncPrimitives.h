#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ScopedAllowBaseSyncPrimitives {
public:
    // prevent constructor by default
    ScopedAllowBaseSyncPrimitives& operator=(ScopedAllowBaseSyncPrimitives const&);
    ScopedAllowBaseSyncPrimitives(ScopedAllowBaseSyncPrimitives const&);
    ScopedAllowBaseSyncPrimitives();
};

} // namespace rtc
