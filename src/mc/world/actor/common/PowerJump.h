#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PowerJump {

public:
    // prevent constructor by default
    PowerJump& operator=(PowerJump const&) = delete;
    PowerJump(PowerJump const&)            = delete;
    PowerJump()                            = delete;
};
