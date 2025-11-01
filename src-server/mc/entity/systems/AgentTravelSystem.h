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
struct AbilitiesComponent;
struct ActorMovementTickNeededComponent;
struct AgentFlagComponent;
struct MoveRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace AgentTravelSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem(bool isClientSide);

MCNAPI void tickClient(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::AgentFlagComponent>,
        ::ActorOwnerComponent,
        ::AbilitiesComponent> view
);

MCNAPI void tickServer(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::AgentFlagComponent>,
        ::ActorOwnerComponent,
        ::AbilitiesComponent,
        ::StateVectorComponent>              view,
    ::EntityModifier<::MoveRequestComponent> mod
);
// NOLINTEND

} // namespace AgentTravelSystem
