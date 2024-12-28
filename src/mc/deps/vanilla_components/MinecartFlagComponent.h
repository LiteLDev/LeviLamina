#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecartFlagComponent {
public:
    // prevent constructor by default
    MinecartFlagComponent& operator=(MinecartFlagComponent const&);
    MinecartFlagComponent(MinecartFlagComponent const&);
    MinecartFlagComponent();
};
