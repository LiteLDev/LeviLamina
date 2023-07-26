#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SwimSpeedMultiplierComponent {

public:
    // prevent constructor by default
    SwimSpeedMultiplierComponent& operator=(SwimSpeedMultiplierComponent const&) = delete;
    SwimSpeedMultiplierComponent(SwimSpeedMultiplierComponent const&)            = delete;
    SwimSpeedMultiplierComponent()                                               = delete;
};
