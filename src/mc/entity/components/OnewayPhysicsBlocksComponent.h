#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnewayPhysicsBlocksComponent {

public:
    // prevent constructor by default
    OnewayPhysicsBlocksComponent& operator=(OnewayPhysicsBlocksComponent const&) = delete;
    OnewayPhysicsBlocksComponent(OnewayPhysicsBlocksComponent const&)            = delete;
    OnewayPhysicsBlocksComponent()                                               = delete;
};
