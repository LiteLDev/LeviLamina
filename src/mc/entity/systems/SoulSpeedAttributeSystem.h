#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct TickingSystemWithInfo;
// clang-format on

struct SoulSpeedAttributeSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tryProcessSoulSpeed(::StrictEntityContext&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
