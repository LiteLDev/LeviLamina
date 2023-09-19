#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IMobMovementProxy {
public:
    // prevent constructor by default
    IMobMovementProxy& operator=(IMobMovementProxy const&);
    IMobMovementProxy(IMobMovementProxy const&);
    IMobMovementProxy();
};
