#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct EyeOfEnderFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class EyeOfEnderPreNormalTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doEyeOfEnderPreNormalTickSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

};
