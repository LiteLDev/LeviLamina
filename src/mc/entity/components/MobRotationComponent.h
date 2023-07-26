#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobRotationComponent {

public:
    // prevent constructor by default
    MobRotationComponent& operator=(MobRotationComponent const&) = delete;
    MobRotationComponent(MobRotationComponent const&)            = delete;
    MobRotationComponent()                                       = delete;
};
