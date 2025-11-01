#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct PassengerComponent;
struct StateVectorComponent;
// clang-format on

class PassengerFreezeMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void freezeMovement(::StrictEntityContext&, ::StateVectorComponent& stateVector);

    MCNAPI static void tickPassengerFreezeMovementSystem(::ViewT<::StrictEntityContext, ::Include<::PassengerComponent, ::ActorMovementTickNeededComponent>, ::StateVectorComponent> view);
    // NOLINTEND

};
