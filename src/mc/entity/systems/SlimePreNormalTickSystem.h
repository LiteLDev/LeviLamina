#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct OnGroundFlagComponent;
struct SlimeFlagComponent;
struct SlimeWasOnGroundPreNormalTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class SlimePreNormalTickSystem {
public:
    // prevent constructor by default
    SlimePreNormalTickSystem& operator=(SlimePreNormalTickSystem const&);
    SlimePreNormalTickSystem(SlimePreNormalTickSystem const&);
    SlimePreNormalTickSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doSlimePreNormalTickSystem(
        ::StrictEntityContext&                                     context,
        ::ActorOwnerComponent&                                     actorOwnerComponent,
        ::Optional<::OnGroundFlagComponent const>                  onGround,
        ::EntityModifier<::SlimeWasOnGroundPreNormalTickComponent> mod
    );

    MCAPI static void _tickSlimePreNormalTickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::SlimeFlagComponent>,
            ::ActorOwnerComponent,
            ::Optional<::OnGroundFlagComponent const>>             view,
        ::EntityModifier<::SlimeWasOnGroundPreNormalTickComponent> mod
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
