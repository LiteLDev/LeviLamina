#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobJumpComponent {
public:
    // prevent constructor by default
    MobJumpComponent& operator=(MobJumpComponent const&);
    MobJumpComponent(MobJumpComponent const&);
    MobJumpComponent();
};
