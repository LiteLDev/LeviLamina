#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SimulatedPlayerFlag {
public:
    // prevent constructor by default
    SimulatedPlayerFlag& operator=(SimulatedPlayerFlag const&);
    SimulatedPlayerFlag(SimulatedPlayerFlag const&);
    SimulatedPlayerFlag();
};
