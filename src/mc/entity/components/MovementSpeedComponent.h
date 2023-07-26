#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementSpeedComponent {

public:
    // prevent constructor by default
    MovementSpeedComponent& operator=(MovementSpeedComponent const&) = delete;
    MovementSpeedComponent(MovementSpeedComponent const&)            = delete;
    MovementSpeedComponent()                                         = delete;
};
