#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsDeadFlag {
public:
    // prevent constructor by default
    IsDeadFlag& operator=(IsDeadFlag const&);
    IsDeadFlag(IsDeadFlag const&);
    IsDeadFlag();
};
