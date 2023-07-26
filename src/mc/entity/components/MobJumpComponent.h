#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobJumpComponent {

public:
    // prevent constructor by default
    MobJumpComponent& operator=(MobJumpComponent const&) = delete;
    MobJumpComponent(MobJumpComponent const&)            = delete;
    MobJumpComponent()                                   = delete;
};
