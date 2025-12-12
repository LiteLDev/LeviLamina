#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct MobFlagComponent;
struct PushActorsRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

struct PushActorsSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickPushActors(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent, ::PushActorsRequestComponent>,
            ::ActorOwnerComponent>                     view,
        ::EntityModifier<::PushActorsRequestComponent> mod
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void pushActors(::ActorOwnerComponent& actorOwnerComponent);
    // NOLINTEND
};
