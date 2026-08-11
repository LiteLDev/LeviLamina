#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorUniqueIDComponent;
struct BounceComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class BounceEventingSystem {
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

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
