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
struct BlazeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class BlazePreTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doBlazePreTravelSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickBlazePreTravelSystem(::ViewT<
                                                ::StrictEntityContext,
                                                ::Include<::ActorMovementTickNeededComponent, ::BlazeFlagComponent>,
                                                ::ActorOwnerComponent> view);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
