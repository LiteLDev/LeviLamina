#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class PassengerFreezeMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void freezeMovement(::StrictEntityContext& stateVector, ::StateVectorComponent&);
    // NOLINTEND
};
