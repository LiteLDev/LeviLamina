#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SwitchingVehiclesFlag {
public:
    // prevent constructor by default
    SwitchingVehiclesFlag& operator=(SwitchingVehiclesFlag const&);
    SwitchingVehiclesFlag(SwitchingVehiclesFlag const&);
    SwitchingVehiclesFlag();
};
