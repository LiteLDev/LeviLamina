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
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void tick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::ReplayStateComponent>> entity,
    ::StrictEntityContext const&                                                             actorBoundingBox,
    ::ActorDataBoundingBoxComponent const&                                                   actorDataFlag,
    ::ActorDataFlagComponent const&                                                          actorUniqueId,
    ::ActorUniqueIDComponent const&                                                          movementAttributes,
    ::MovementAttributesComponent const&                                                     clientPrediction,
    ::ServerPlayerMovementSyncComponent const&                                               abilities,
    ::AbilitiesComponent const&                                                              actorDataDirtyFlag,
    ::ActorDataDirtyFlagsComponent&                                                          attributes,
    ::AttributesComponent&                                                                   modifier,
    ::EntityModifier<::ServerPlayerMovementSyncComponent, ::SendPacketsComponent>
);
// NOLINTEND

} // namespace ValidateClientPredictionSystem
