#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoClimbTravelFlag {
public:
    // prevent constructor by default
    AutoClimbTravelFlag& operator=(AutoClimbTravelFlag const&);
    AutoClimbTravelFlag(AutoClimbTravelFlag const&);
    AutoClimbTravelFlag();
};
