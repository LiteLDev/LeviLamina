#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct TickingSystemWithInfo;
// clang-format on

class BlazePreTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doBlazePreTravelSystem(::StrictEntityContext const& actorOwnerComponent, ::ActorOwnerComponent&);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
