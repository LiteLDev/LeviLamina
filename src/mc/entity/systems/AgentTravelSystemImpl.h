#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct AbilitiesComponent;
struct MoveRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace AgentTravelSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doClientAgentTravel(::ActorOwnerComponent& actorOwnerComponent, ::AbilitiesComponent& abilitiesComponent);

MCNAPI void doServerAgentTravel(
    ::StrictEntityContext const&             entity,
    ::ActorOwnerComponent&                   actorOwnerComponent,
    ::AbilitiesComponent&                    abilitiesComponent,
    ::StateVectorComponent&                  stateVectorComponent,
    ::EntityModifier<::MoveRequestComponent> mod
);
// NOLINTEND

} // namespace AgentTravelSystemImpl
