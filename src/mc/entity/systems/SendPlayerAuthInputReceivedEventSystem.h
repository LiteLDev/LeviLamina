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
struct PlayerComponent;
struct ServerPlayerCurrentMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

class SendPlayerAuthInputReceivedEventSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doSendPlayerAuthInputReceivedEvent(
        ::StrictEntityContext&,
        ::PlayerComponent const& playerComponent,
        ::ActorOwnerComponent&   actorOwnerComponent
    );

    MCAPI static ::TickingSystemWithInfo create();

    MCAPI static void tickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::ServerPlayerCurrentMovementComponent>,
            ::PlayerComponent const,
            ::ActorOwnerComponent> view
    );
    // NOLINTEND
};
