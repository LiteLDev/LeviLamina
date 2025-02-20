#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ReplayStateComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorUniqueIDComponent;
struct AttributesComponent;
struct MovementAttributesComponent;
struct ServerPlayerMovementSyncComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ValidateClientPredictionSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void tick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::ReplayStateComponent>>,
    ::StrictEntityContext const&                          entity,
    ::ActorDataBoundingBoxComponent const&                actorBoundingBox,
    ::ActorDataFlagComponent const&                       actorDataFlag,
    ::ActorUniqueIDComponent const&                       actorUniqueId,
    ::MovementAttributesComponent const&                  movementAttributes,
    ::ServerPlayerMovementSyncComponent const&            clientPrediction,
    ::ActorDataDirtyFlagsComponent&                       actorDataDirtyFlag,
    ::AttributesComponent&                                attributes,
    ::EntityModifier<::ServerPlayerMovementSyncComponent> modifier
);
// NOLINTEND

} // namespace ValidateClientPredictionSystem
