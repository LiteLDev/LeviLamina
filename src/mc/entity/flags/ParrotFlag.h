#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParrotFlag {

public:
    // prevent constructor by default
    ParrotFlag& operator=(ParrotFlag const&) = delete;
    ParrotFlag(ParrotFlag const&)            = delete;
    ParrotFlag()                             = delete;
};
