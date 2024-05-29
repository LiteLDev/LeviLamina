#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickDeltaTimeManagerProxy {
public:
    // prevent constructor by default
    ITickDeltaTimeManagerProxy& operator=(ITickDeltaTimeManagerProxy const&);
    ITickDeltaTimeManagerProxy(ITickDeltaTimeManagerProxy const&);
    ITickDeltaTimeManagerProxy();
};
