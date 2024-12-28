#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class UpdateWaterStateRequestSystem {
public:
    // prevent constructor by default
    UpdateWaterStateRequestSystem& operator=(UpdateWaterStateRequestSystem const&);
    UpdateWaterStateRequestSystem(UpdateWaterStateRequestSystem const&);
    UpdateWaterStateRequestSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
