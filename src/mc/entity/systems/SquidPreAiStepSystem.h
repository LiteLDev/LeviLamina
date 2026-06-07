#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct LocalMoveVelocityComponent;
struct TickingSystemWithInfo;
// clang-format on

class SquidPreAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doSquidPreAiStepSystem(::StrictEntityContext const& localMoveVelocityComponent, ::LocalMoveVelocityComponent&);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
