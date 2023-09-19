#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MaxAutoStepComponent {
public:
    // prevent constructor by default
    MaxAutoStepComponent& operator=(MaxAutoStepComponent const&);
    MaxAutoStepComponent(MaxAutoStepComponent const&);
    MaxAutoStepComponent();
};
