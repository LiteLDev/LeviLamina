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
    // prevent constructor by default
    MinecartPreNormalTickSystem& operator=(MinecartPreNormalTickSystem const&);
    MinecartPreNormalTickSystem(MinecartPreNormalTickSystem const&);
    MinecartPreNormalTickSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doMinecartPreNormalTickSystem(
        ::StrictEntityContext&                                     context,
        ::ActorOwnerComponent&                                     actorOwnerComponent,
        ::EntityModifier<::MinecartPreNormalTickBlockPosComponent> mod
    );

    MCAPI static void _tickMinecartPreNormalTickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::MinecartFlagComponent>,
            ::ActorOwnerComponent>                                 view,
        ::EntityModifier<::MinecartPreNormalTickBlockPosComponent> mod
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
