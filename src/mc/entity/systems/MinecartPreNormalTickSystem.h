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
struct InterpolateMovementNeededComponent;
struct MinecartFlagComponent;
struct MinecartPreNormalTickBlockPosComponent;
struct TickingSystemWithInfo;
// clang-format on

class MinecartPreNormalTickSystem {
public:
    // MinecartPreNormalTickSystem inner types define
    using ModType = ::EntityModifier<::MinecartPreNormalTickBlockPosComponent>;

    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::MinecartFlagComponent>,
        ::ActorOwnerComponent>;

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
            ::Include<::InterpolateMovementNeededComponent, ::MinecartFlagComponent>,
            ::ActorOwnerComponent>                                 view,
        ::EntityModifier<::MinecartPreNormalTickBlockPosComponent> mod
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
