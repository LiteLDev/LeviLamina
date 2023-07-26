#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VariableMaxAutoStepComponent {

public:
    // prevent constructor by default
    VariableMaxAutoStepComponent& operator=(VariableMaxAutoStepComponent const&) = delete;
    VariableMaxAutoStepComponent(VariableMaxAutoStepComponent const&)            = delete;
    VariableMaxAutoStepComponent()                                               = delete;
};
