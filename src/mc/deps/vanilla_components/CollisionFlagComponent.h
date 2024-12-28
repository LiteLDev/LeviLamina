#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollisionFlagComponent {
public:
    // prevent constructor by default
    CollisionFlagComponent& operator=(CollisionFlagComponent const&);
    CollisionFlagComponent(CollisionFlagComponent const&);
    CollisionFlagComponent();
};
