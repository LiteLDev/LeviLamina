#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlySpeedComponent {

public:
    // prevent constructor by default
    FlySpeedComponent& operator=(FlySpeedComponent const&) = delete;
    FlySpeedComponent(FlySpeedComponent const&)            = delete;
    FlySpeedComponent()                                    = delete;
};
