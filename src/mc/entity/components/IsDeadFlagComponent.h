#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsDeadFlagComponent {
public:
    // prevent constructor by default
    IsDeadFlagComponent& operator=(IsDeadFlagComponent const&);
    IsDeadFlagComponent(IsDeadFlagComponent const&);
    IsDeadFlagComponent();
};
