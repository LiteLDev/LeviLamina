#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct CompareVehiclePositionSystem {
public:
    // prevent constructor by default
    CompareVehiclePositionSystem& operator=(CompareVehiclePositionSystem const&);
    CompareVehiclePositionSystem(CompareVehiclePositionSystem const&);
    CompareVehiclePositionSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
