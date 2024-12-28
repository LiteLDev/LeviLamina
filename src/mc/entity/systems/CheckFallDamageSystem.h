#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class CheckFallDamageSystem {
public:
    // prevent constructor by default
    CheckFallDamageSystem& operator=(CheckFallDamageSystem const&);
    CheckFallDamageSystem(CheckFallDamageSystem const&);
    CheckFallDamageSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static ::TickingSystemWithInfo createVehicleResetFallDistanceSystem();
    // NOLINTEND
};
