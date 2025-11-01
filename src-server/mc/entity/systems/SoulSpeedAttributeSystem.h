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
    MCNAPI static void _tryProcessSoulSpeed(::StrictEntityContext&, ::ActorOwnerComponent& actorOwnerComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
