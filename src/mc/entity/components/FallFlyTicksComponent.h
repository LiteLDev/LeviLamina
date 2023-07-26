#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FallFlyTicksComponent {

public:
    // prevent constructor by default
    FallFlyTicksComponent& operator=(FallFlyTicksComponent const&) = delete;
    FallFlyTicksComponent(FallFlyTicksComponent const&)            = delete;
    FallFlyTicksComponent()                                        = delete;
};
