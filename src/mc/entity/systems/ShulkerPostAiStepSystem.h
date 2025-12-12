#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct MobBodyRotationComponent;
struct ShulkerFlagComponent;
struct StateVectorComponent;
// clang-format on

class ShulkerPostAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doShulkerPostAiStepSystem(
        ::StrictEntityContext const&,
        ::ActorRotationComponent&   actorRotationComponent,
        ::MobBodyRotationComponent& mobBodyRotationComponent,
        ::StateVectorComponent&     stateVectorComponent
    );

    MCNAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::ShulkerFlagComponent>,
            ::ActorRotationComponent,
            ::MobBodyRotationComponent,
            ::StateVectorComponent> view
    );
    // NOLINTEND
};
