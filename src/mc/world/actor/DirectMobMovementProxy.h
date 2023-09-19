#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DirectMobMovementProxy {
public:
    // prevent constructor by default
    DirectMobMovementProxy& operator=(DirectMobMovementProxy const&);
    DirectMobMovementProxy(DirectMobMovementProxy const&);
    DirectMobMovementProxy();
};
