#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct VRFlyTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createPostPlayerTravelSystem();

    MCAPI static ::TickingSystemWithInfo createPrePlayerTravelSystem();
    // NOLINTEND
};
