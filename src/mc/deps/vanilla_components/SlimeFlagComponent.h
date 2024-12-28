#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlimeFlagComponent {
public:
    // prevent constructor by default
    SlimeFlagComponent& operator=(SlimeFlagComponent const&);
    SlimeFlagComponent(SlimeFlagComponent const&);
    SlimeFlagComponent();
};
