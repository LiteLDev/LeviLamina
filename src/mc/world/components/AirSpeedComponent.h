#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AirSpeedComponent {
public:
    // prevent constructor by default
    AirSpeedComponent& operator=(AirSpeedComponent const&);
    AirSpeedComponent(AirSpeedComponent const&);
    AirSpeedComponent();
};
