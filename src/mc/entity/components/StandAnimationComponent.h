#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StandAnimationComponent {

public:
    // prevent constructor by default
    StandAnimationComponent& operator=(StandAnimationComponent const&) = delete;
    StandAnimationComponent(StandAnimationComponent const&)            = delete;
    StandAnimationComponent()                                          = delete;
};
