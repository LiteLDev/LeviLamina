#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShouldBeSimulatedFlag {
public:
    // prevent constructor by default
    ShouldBeSimulatedFlag& operator=(ShouldBeSimulatedFlag const&);
    ShouldBeSimulatedFlag(ShouldBeSimulatedFlag const&);
    ShouldBeSimulatedFlag();
};
