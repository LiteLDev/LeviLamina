#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct StateVectorComponent;
// clang-format on

class PassengerFreezeMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void freezeMovement(::StrictEntityContext&, ::StateVectorComponent& stateVector);
    // NOLINTEND
};
