#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct InterpolateMovementNeededComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class MobSetPreviousRotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setPreviousRotation(
        ::StrictEntityContext&,
        ::ActorHeadRotationComponent& actorHeadRotation,
        ::ActorRotationComponent&     actorRotation,
        ::MobBodyRotationComponent&   mobBodyRotation
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::MobFlagComponent>,
            ::ActorHeadRotationComponent,
            ::ActorRotationComponent,
            ::MobBodyRotationComponent> mobView
    );
    // NOLINTEND
};
