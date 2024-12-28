#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PhysicsComponent {
public:
    // prevent constructor by default
    PhysicsComponent& operator=(PhysicsComponent const&);
    PhysicsComponent(PhysicsComponent const&);
    PhysicsComponent();
};
