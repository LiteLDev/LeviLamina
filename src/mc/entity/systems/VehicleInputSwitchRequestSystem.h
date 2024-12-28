#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct VehicleInputSwitchRequestSystem {
public:
    // prevent constructor by default
    VehicleInputSwitchRequestSystem& operator=(VehicleInputSwitchRequestSystem const&);
    VehicleInputSwitchRequestSystem(VehicleInputSwitchRequestSystem const&);
    VehicleInputSwitchRequestSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
