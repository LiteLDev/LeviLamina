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
struct TickingSystemWithInfo;
// clang-format on

class ActorUpdatePreviousPositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo create();

    MCNAPI static void tickSystem(
        ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::ActorOwnerComponent>
            tickWithMovement
    );
    // NOLINTEND
};
