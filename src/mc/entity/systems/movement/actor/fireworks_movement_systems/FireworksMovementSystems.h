#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/systems/movement/actor/fireworks_movement_systems/RocketAttached.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class LocalSpatialEntityFetcher;
class StrictEntityContext;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobFlagComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace FireworksMovementSystems {
// functions
// NOLINTBEGIN
MCNAPI ::FireworksMovementSystems::RocketAttached fireworksRocketMoveClientEntity(
    ::StrictEntityContext const&       rocket,
    ::SynchedActorDataComponent const& rocketData,
    ::StateVectorComponent&            rocketStateVector,
    ::ActorRotationComponent&          rocketRotation,
    ::LocalSpatialEntityFetcher&       fetcher,
    ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::StateVectorComponent const> const& stateVectors,
    ::EntityModifier<::ActorSetPositionRequestComponent>                                               modifier
);

MCNAPI void registerRocketMovementSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace FireworksMovementSystems
