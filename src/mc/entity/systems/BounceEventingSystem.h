#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorUniqueIDComponent;
struct BounceComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class BounceEventingSystem {
public:
    // prevent constructor by default
    BounceEventingSystem& operator=(BounceEventingSystem const&);
    BounceEventingSystem(BounceEventingSystem const&);
    BounceEventingSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doBounceEventingSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&                                   stateVectorComponent,
        ::ActorUniqueIDComponent const&                                 actorUniqueIDComponent,
        ::EventingDispatcherComponent const&                            eventingDispatcherComponent,
        ::BounceComponent&                                              bounceComponent,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView
    );

    MCAPI static void _tickBounceEventingSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::PlayerComponent>,
            ::StateVectorComponent const,
            ::ActorUniqueIDComponent const,
            ::EventingDispatcherComponent const,
            ::BounceComponent>                                          view,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
