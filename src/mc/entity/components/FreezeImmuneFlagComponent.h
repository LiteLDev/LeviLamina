#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FreezeImmuneFlagComponent {
public:
    // prevent constructor by default
    FreezeImmuneFlagComponent& operator=(FreezeImmuneFlagComponent const&);
    FreezeImmuneFlagComponent(FreezeImmuneFlagComponent const&);
    FreezeImmuneFlagComponent();
};
