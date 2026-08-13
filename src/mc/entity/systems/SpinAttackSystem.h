#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct DamageNearbyMobsComponent;
struct DimensionTypeComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MobFlagComponent;
struct PlayerActionComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct SpinAttackResultsComponent;
// clang-format on

namespace SpinAttackSystem {
// functions
// NOLINTBEGIN
MCAPI void _fetchEntitiesForSpinAttack(
    ::StrictEntityContext const&                                  entity,
    ::AABBShapeComponent const&                                   aabb,
    ::ActorDataFlagComponent const&                               actorData,
    ::DimensionTypeComponent const&                               dimension,
    ::LocalSpatialEntityFetcherFactoryComponent&                  factory,
    ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>> mobView,
    ::EntityModifier<::SpinAttackResultsComponent>                modifier
);

MCAPI void _stopSpinAttack(
    ::StrictEntityContext const&                                entity,
    ::ActorDataFlagComponent&                                   actorData,
    ::ActorDataDirtyFlagsComponent&                             actorDataDirtyFlags,
    ::DamageNearbyMobsComponent&                                damageNearbyMobs,
    ::PlayerActionComponent&                                    playerAction,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier
);

MCAPI void createSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace SpinAttackSystem
