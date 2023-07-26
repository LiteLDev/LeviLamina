#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SneakingComponent {

public:
    // prevent constructor by default
    SneakingComponent& operator=(SneakingComponent const&) = delete;
    SneakingComponent(SneakingComponent const&)            = delete;
    SneakingComponent()                                    = delete;
};
