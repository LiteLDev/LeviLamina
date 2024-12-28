#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class WaterMoveSystem {
public:
    // prevent constructor by default
    WaterMoveSystem& operator=(WaterMoveSystem const&);
    WaterMoveSystem(WaterMoveSystem const&);
    WaterMoveSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createWaterMoveSystem();
    // NOLINTEND
};
