#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobHurtTimeComponent {

public:
    // prevent constructor by default
    MobHurtTimeComponent& operator=(MobHurtTimeComponent const&) = delete;
    MobHurtTimeComponent(MobHurtTimeComponent const&)            = delete;
    MobHurtTimeComponent()                                       = delete;
};
