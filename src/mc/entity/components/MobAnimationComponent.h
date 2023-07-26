#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobAnimationComponent {

public:
    // prevent constructor by default
    MobAnimationComponent& operator=(MobAnimationComponent const&) = delete;
    MobAnimationComponent(MobAnimationComponent const&)            = delete;
    MobAnimationComponent()                                        = delete;
};
