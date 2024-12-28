#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GuardianFlagComponent {
public:
    // prevent constructor by default
    GuardianFlagComponent& operator=(GuardianFlagComponent const&);
    GuardianFlagComponent(GuardianFlagComponent const&);
    GuardianFlagComponent();
};
