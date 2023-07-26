#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsDeadFlag {

public:
    // prevent constructor by default
    IsDeadFlag& operator=(IsDeadFlag const&) = delete;
    IsDeadFlag(IsDeadFlag const&)            = delete;
    IsDeadFlag()                             = delete;
};
