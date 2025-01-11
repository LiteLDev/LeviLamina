#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct MovementInterpolatorSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createOnGroundPostTickSystem();

    MCAPI static ::TickingSystemWithInfo createTickSystem(bool isClientSide);
    // NOLINTEND
};
