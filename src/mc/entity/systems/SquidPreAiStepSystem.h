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
    MCNAPI static void
    _doSquidPreAiStepSystem(::StrictEntityContext const&, ::LocalMoveVelocityComponent& localMoveVelocityComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
