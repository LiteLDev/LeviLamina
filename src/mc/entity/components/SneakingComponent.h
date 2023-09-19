#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SneakingComponent {
public:
    // prevent constructor by default
    SneakingComponent& operator=(SneakingComponent const&);
    SneakingComponent(SneakingComponent const&);
    SneakingComponent();
};
