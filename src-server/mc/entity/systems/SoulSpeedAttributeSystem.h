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
    MCNAPI static void _tryProcessSoulSpeed(::StrictEntityContext&, ::ActorOwnerComponent& actorOwnerComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>,
            ::ActorOwnerComponent> view
    );
    // NOLINTEND
};
