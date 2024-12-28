#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SimulatedPlayerFlagComponent {
public:
    // prevent constructor by default
    SimulatedPlayerFlagComponent& operator=(SimulatedPlayerFlagComponent const&);
    SimulatedPlayerFlagComponent(SimulatedPlayerFlagComponent const&);
    SimulatedPlayerFlagComponent();
};
