#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct PostTickPositionDeltaComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class ActorUpdatePostTickPositionDeltaSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickActorUpdatePostTickPositionDeltaSystem(::ViewT<
                                                                   ::StrictEntityContext,
                                                                   ::Include<::ActorMovementTickNeededComponent>,
                                                                   ::StateVectorComponent const,
                                                                   ::PostTickPositionDeltaComponent> view);

    MCNAPI static ::TickingSystemWithInfo createActorUpdatePostTickPositionDeltaSystem();
    // NOLINTEND
};
