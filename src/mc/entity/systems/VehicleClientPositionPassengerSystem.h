#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct VehicleClientPositionPassengerSystem {
public:
    // prevent constructor by default
    VehicleClientPositionPassengerSystem& operator=(VehicleClientPositionPassengerSystem const&);
    VehicleClientPositionPassengerSystem(VehicleClientPositionPassengerSystem const&);
    VehicleClientPositionPassengerSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSetPositionRequestSystem();

    MCAPI static ::TickingSystemWithInfo createSetPreviousPosRotSystem();

    MCAPI static ::TickingSystemWithInfo createSetRotationLock();
    // NOLINTEND
};
