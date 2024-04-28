#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickTimeManagerProxy {
public:
    // prevent constructor by default
    ITickTimeManagerProxy& operator=(ITickTimeManagerProxy const&);
    ITickTimeManagerProxy(ITickTimeManagerProxy const&);
    ITickTimeManagerProxy();
};
