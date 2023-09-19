#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirectAgentMobMovementProxy {
public:
    // prevent constructor by default
    DirectAgentMobMovementProxy& operator=(DirectAgentMobMovementProxy const&);
    DirectAgentMobMovementProxy(DirectAgentMobMovementProxy const&);
    DirectAgentMobMovementProxy();

public:
    // NOLINTBEGIN
    // symbol: ?isFlying@DirectAgentMobMovementProxy@@UEBA_NXZ
    MCVAPI bool isFlying() const;

    // NOLINTEND
};
