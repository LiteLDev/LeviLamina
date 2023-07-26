#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlidingCollisionDamageComponent {

public:
    // prevent constructor by default
    GlidingCollisionDamageComponent& operator=(GlidingCollisionDamageComponent const&) = delete;
    GlidingCollisionDamageComponent(GlidingCollisionDamageComponent const&)            = delete;
    GlidingCollisionDamageComponent()                                                  = delete;
};
