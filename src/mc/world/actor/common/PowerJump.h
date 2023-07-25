#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PowerJump {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POWERJUMP
public:
    PowerJump& operator=(PowerJump const&) = delete;
    PowerJump(PowerJump const&)            = delete;
    PowerJump()                            = delete;
#endif

public:
};
