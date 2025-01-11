#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct PassengerTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createMobPostPassengerTickSystem();

    MCAPI static ::TickingSystemWithInfo createPlayerPostPassengerTickSystem();
    // NOLINTEND
};
