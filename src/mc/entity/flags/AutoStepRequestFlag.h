#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoStepRequestFlag {

public:
    // prevent constructor by default
    AutoStepRequestFlag& operator=(AutoStepRequestFlag const&) = delete;
    AutoStepRequestFlag(AutoStepRequestFlag const&)            = delete;
    AutoStepRequestFlag()                                      = delete;
};
