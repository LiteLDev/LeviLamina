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
struct MobFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

struct SoulSpeedAttributeSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tryProcessSoulSpeed(::StrictEntityContext&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void tickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>,
            ::ActorOwnerComponent> view
    );
    // NOLINTEND
};
