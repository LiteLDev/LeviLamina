#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MaxAutoStepComponent {

public:
    // prevent constructor by default
    MaxAutoStepComponent& operator=(MaxAutoStepComponent const&) = delete;
    MaxAutoStepComponent(MaxAutoStepComponent const&)            = delete;
    MaxAutoStepComponent()                                       = delete;
};
