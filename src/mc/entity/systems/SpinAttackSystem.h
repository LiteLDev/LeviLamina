#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySystems;
class StrictEntityContext;
class Vec2;
class Vec3;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorEquipmentComponent;
struct ActorHeadInWaterFlagComponent;
struct ActorIsImmobileFlagComponent;
struct ActorIsKnockedBackOnDeathFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct DamageNearbyMobsComponent;
struct DimensionTypeComponent;
struct FallDistanceComponent;
struct HorizontalCollisionFlagComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MobFlagComponent;
struct MovedOnSpawnComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PlayerActionComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct RiptideTridentSpinAttackComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct SpinAttackResultsComponent;
struct StateVectorComponent;
struct WasInWaterFlagComponent;
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

MCAPI void _removeSpinAttack(
    ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::RiptideTridentSpinAttackComponent>>
                                                                                        filter,
    ::EntityModifier<::RiptideTridentSpinAttackComponent, ::SpinAttackResultsComponent> modifier
);

MCAPI void _stopSpinAttack(
    ::StrictEntityContext const&                                entity,
    ::ActorDataFlagComponent&                                   actorData,
    ::ActorDataDirtyFlagsComponent&                             actorDataDirtyFlags,
    ::DamageNearbyMobsComponent&                                damageNearbyMobs,
    ::PlayerActionComponent&                                    playerAction,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier
);

MCAPI void _tickDamageNearbyMobs(
    ::entt::type_list<::Include<::PlayerComponent>> actorEquipment,
    ::ActorEquipmentComponent const&                spinAttackResult,
    ::SpinAttackResultsComponent const&             actorComponent,
    ::ActorOwnerComponent&                          actorView,
    ::ViewT<::StrictEntityContext, ::ActorOwnerComponent>
);

MCAPI void _tickPostDamageNearbyMobs(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                     actorData,
    ::ActorDataFlagComponent&                                        actorDataDirtyFlags,
    ::ActorDataDirtyFlagsComponent&                                  damageNearbyMobs,
    ::DamageNearbyMobsComponent&                                     fallDistance,
    ::FallDistanceComponent&                                         playerAction,
    ::PlayerActionComponent&                                         svc,
    ::StateVectorComponent&                                          isOnGround,
    ::Optional<::OnGroundFlagComponent const>                        hasHorizontalCollision,
    ::Optional<::HorizontalCollisionFlagComponent const>             spinAttackResult,
    ::Optional<::SpinAttackResultsComponent const>                   modifier,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>
);

MCAPI void _tickSpinAttackAction(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                     actorRotation,
    ::ActorRotationComponent const&                                  riptideSpinAttack,
    ::RiptideTridentSpinAttackComponent const&                       actorData,
    ::ActorDataFlagComponent&                                        dirtyFlags,
    ::ActorDataDirtyFlagsComponent&                                  damageNearbyMobs,
    ::DamageNearbyMobsComponent&                                     svc,
    ::StateVectorComponent&                                          isOnGround,
    ::Optional<::OnGroundFlagComponent const>                        wasInWater,
    ::Optional<::WasInWaterFlagComponent const>                      isHeadInWater,
    ::Optional<::ActorHeadInWaterFlagComponent const>                actorView,
    ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Optional<::ActorIsImmobileFlagComponent const>>&
        mobView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobFlagComponent>,
        ::MovementAttributesComponent const,
        ::Optional<::ActorIsKnockedBackOnDeathFlagComponent const>,
        ::Optional<::MovedOnSpawnComponent const>>&                                                 playerView,
    ::ViewT<::StrictEntityContext, ::PlayerIsSleepingFlagComponent const, ::PlayerComponent const>& modifier,
    ::EntityModifier<::RiptideTridentSpinAttackComponent, ::ShouldUpdateBoundingBoxRequestComponent>
);

MCAPI ::Vec3 calculateImpulse(::Vec2 const& rotation, int riptideEnchantLevel, bool isOnGround, bool isOnlyBodyInWater);

MCAPI void createSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace SpinAttackSystem
