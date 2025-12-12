#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorTickedComponent;
struct IsDeadFlagComponent;
struct ServerPlayerComponent;
struct SimulatedPlayerFlagComponent;
// clang-format on

namespace ServerAnimationSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickAnimationSystem(::ActorOwnerComponent& actorOwnerComponent);

MCNAPI void tickServerInputDependentActorsAnimationSystem(
    ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::ActorOwnerComponent> view
);

MCNAPI void tickServerInputIndependentAnimationSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ServerPlayerComponent, ::IsDeadFlagComponent, ::ActorTickedComponent>,
        ::Exclude<::ActorMovementTickNeededComponent, ::SimulatedPlayerFlagComponent>,
        ::ActorOwnerComponent> deadPlayerViews
);
// NOLINTEND

} // namespace ServerAnimationSystemImpl
