#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipAiStepFlag {

public:
    // prevent constructor by default
    SkipAiStepFlag& operator=(SkipAiStepFlag const&) = delete;
    SkipAiStepFlag(SkipAiStepFlag const&)            = delete;
    SkipAiStepFlag()                                 = delete;
};
