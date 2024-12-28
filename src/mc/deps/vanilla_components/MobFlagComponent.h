#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobFlagComponent {
public:
    // prevent constructor by default
    MobFlagComponent& operator=(MobFlagComponent const&);
    MobFlagComponent(MobFlagComponent const&);
    MobFlagComponent();
};
