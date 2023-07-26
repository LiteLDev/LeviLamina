#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobBodyRotationComponent {

public:
    // prevent constructor by default
    MobBodyRotationComponent& operator=(MobBodyRotationComponent const&) = delete;
    MobBodyRotationComponent(MobBodyRotationComponent const&)            = delete;
    MobBodyRotationComponent()                                           = delete;
};
