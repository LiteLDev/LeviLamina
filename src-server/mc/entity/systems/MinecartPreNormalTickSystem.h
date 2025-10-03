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
struct MinecartFlagComponent;
struct MinecartPreNormalTickBlockPosComponent;
struct TickingSystemWithInfo;
// clang-format on

class MinecartPreNormalTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doMinecartPreNormalTickSystem(
        ::StrictEntityContext&                                     context,
        ::ActorOwnerComponent&                                     actorOwnerComponent,
        ::EntityModifier<::MinecartPreNormalTickBlockPosComponent> mod
    );

    MCNAPI static void _tickMinecartPreNormalTickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::MinecartFlagComponent>,
            ::ActorOwnerComponent>                                 view,
        ::EntityModifier<::MinecartPreNormalTickBlockPosComponent> mod
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
