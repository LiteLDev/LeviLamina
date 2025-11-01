#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ReplayStateComponent;
class StrictEntityContext;
struct AbilitiesComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorUniqueIDComponent;
struct AttributesComponent;
struct MovementAttributesComponent;
struct SendPacketsComponent;
struct ServerPlayerMovementSyncComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ValidateClientPredictionSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void tick(::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::ReplayStateComponent>>, ::StrictEntityContext const& entity, ::ActorDataBoundingBoxComponent const& actorBoundingBox, ::ActorDataFlagComponent const& actorDataFlag, ::ActorUniqueIDComponent const& actorUniqueId, ::MovementAttributesComponent const& movementAttributes, ::ServerPlayerMovementSyncComponent const& clientPrediction, ::AbilitiesComponent const& abilities, ::ActorDataDirtyFlagsComponent& actorDataDirtyFlag, ::AttributesComponent& attributes, ::EntityModifier<::ServerPlayerMovementSyncComponent, ::SendPacketsComponent> modifier);
// NOLINTEND

}
