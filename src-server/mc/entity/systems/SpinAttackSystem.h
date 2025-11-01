#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySystems;
class StrictEntityContext;
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
MCNAPI void _fetchEntitiesForSpinAttack(::StrictEntityContext const& entity, ::AABBShapeComponent const& aabb, ::ActorDataFlagComponent const& actorData, ::DimensionTypeComponent const& dimension, ::LocalSpatialEntityFetcherFactoryComponent& factory, ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>> mobView, ::EntityModifier<::SpinAttackResultsComponent> modifier);

MCNAPI void _removeSpinAttack(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::RiptideTridentSpinAttackComponent>> filter, ::EntityModifier<::RiptideTridentSpinAttackComponent, ::SpinAttackResultsComponent> modifier);

MCNAPI void _stopSpinAttack(::StrictEntityContext const& entity, ::ActorDataFlagComponent& actorData, ::ActorDataDirtyFlagsComponent& actorDataDirtyFlags, ::DamageNearbyMobsComponent& damageNearbyMobs, ::PlayerActionComponent& playerAction, ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier);

MCNAPI void _tickDamageNearbyMobs(::entt::type_list<::Include<::PlayerComponent>>, ::ActorEquipmentComponent const& actorEquipment, ::SpinAttackResultsComponent const& spinAttackResult, ::ActorOwnerComponent& actorComponent, ::ViewT<::StrictEntityContext, ::ActorOwnerComponent> actorView);

MCNAPI void _tickPostDamageNearbyMobs(::entt::type_list<::Include<::ActorMovementTickNeededComponent>>, ::StrictEntityContext const& entity, ::ActorDataFlagComponent& actorData, ::ActorDataDirtyFlagsComponent& actorDataDirtyFlags, ::DamageNearbyMobsComponent& damageNearbyMobs, ::FallDistanceComponent& fallDistance, ::PlayerActionComponent& playerAction, ::StateVectorComponent& svc, ::Optional<::OnGroundFlagComponent const> isOnGround, ::Optional<::HorizontalCollisionFlagComponent const> hasHorizontalCollision, ::Optional<::SpinAttackResultsComponent const> spinAttackResult, ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier);

MCNAPI void _tickSpinAttackAction(::entt::type_list<::Include<::ActorMovementTickNeededComponent>>, ::StrictEntityContext const& entity, ::ActorRotationComponent const& actorRotation, ::RiptideTridentSpinAttackComponent const& riptideSpinAttack, ::ActorDataFlagComponent& actorData, ::ActorDataDirtyFlagsComponent& dirtyFlags, ::DamageNearbyMobsComponent& damageNearbyMobs, ::StateVectorComponent& svc, ::Optional<::OnGroundFlagComponent const> isOnGround, ::Optional<::WasInWaterFlagComponent const> wasInWater, ::Optional<::ActorHeadInWaterFlagComponent const> isHeadInWater, ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Optional<::ActorIsImmobileFlagComponent const>>& actorView, ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::MovementAttributesComponent const, ::Optional<::ActorIsKnockedBackOnDeathFlagComponent const>>& mobView, ::ViewT<::StrictEntityContext, ::PlayerIsSleepingFlagComponent const, ::PlayerComponent const>& playerView, ::EntityModifier<::RiptideTridentSpinAttackComponent, ::ShouldUpdateBoundingBoxRequestComponent> modifier);

MCNAPI void _tickSpinAttackNearbyMobs(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::DamageNearbyMobsComponent>, ::AABBShapeComponent const, ::ActorDataFlagComponent const, ::DimensionTypeComponent const> view, ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent> factory, ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>> mobView, ::EntityModifier<::SpinAttackResultsComponent> modifier);

MCNAPI void createSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

}
