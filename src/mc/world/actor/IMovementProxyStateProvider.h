#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IMovementProxyStateProvider {
public:
    // prevent constructor by default
    IMovementProxyStateProvider& operator=(IMovementProxyStateProvider const&);
    IMovementProxyStateProvider(IMovementProxyStateProvider const&);
    IMovementProxyStateProvider();
};
