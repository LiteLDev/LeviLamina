#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlySpeedComponent {
public:
    // prevent constructor by default
    FlySpeedComponent& operator=(FlySpeedComponent const&);
    FlySpeedComponent(FlySpeedComponent const&);
    FlySpeedComponent();
};
