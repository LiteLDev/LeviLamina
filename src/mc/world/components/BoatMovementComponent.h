#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatMovementComponent {
public:
    // prevent constructor by default
    BoatMovementComponent& operator=(BoatMovementComponent const&);
    BoatMovementComponent(BoatMovementComponent const&);
    BoatMovementComponent();
};
