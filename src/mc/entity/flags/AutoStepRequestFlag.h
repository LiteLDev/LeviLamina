#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoStepRequestFlag {
public:
    // prevent constructor by default
    AutoStepRequestFlag& operator=(AutoStepRequestFlag const&);
    AutoStepRequestFlag(AutoStepRequestFlag const&);
    AutoStepRequestFlag();
};
