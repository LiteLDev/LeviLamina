#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FallDistanceComponent {

public:
    // prevent constructor by default
    FallDistanceComponent& operator=(FallDistanceComponent const&) = delete;
    FallDistanceComponent(FallDistanceComponent const&)            = delete;
    FallDistanceComponent()                                        = delete;
};
