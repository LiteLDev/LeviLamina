#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPlayerMovementProxy {
public:
    // prevent constructor by default
    IPlayerMovementProxy& operator=(IPlayerMovementProxy const&);
    IPlayerMovementProxy(IPlayerMovementProxy const&);
    IPlayerMovementProxy();
};
