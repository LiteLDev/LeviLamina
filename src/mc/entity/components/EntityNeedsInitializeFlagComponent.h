#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityNeedsInitializeFlagComponent {
public:
    // prevent constructor by default
    EntityNeedsInitializeFlagComponent& operator=(EntityNeedsInitializeFlagComponent const&);
    EntityNeedsInitializeFlagComponent(EntityNeedsInitializeFlagComponent const&);
    EntityNeedsInitializeFlagComponent();
};
