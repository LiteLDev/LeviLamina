#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementSpeedComponent {
public:
    // prevent constructor by default
    MovementSpeedComponent& operator=(MovementSpeedComponent const&);
    MovementSpeedComponent(MovementSpeedComponent const&);
    MovementSpeedComponent();
};
