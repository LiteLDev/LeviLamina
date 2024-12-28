#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShouldBeSimulatedComponent {
public:
    // prevent constructor by default
    ShouldBeSimulatedComponent& operator=(ShouldBeSimulatedComponent const&);
    ShouldBeSimulatedComponent(ShouldBeSimulatedComponent const&);
    ShouldBeSimulatedComponent();
};
