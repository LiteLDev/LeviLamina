#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class EntityContext;
class GetCollisionShapeInterface;
class IConstBlockSource;
class JumpControlComponent;
class MobEffectInstance;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorIsImmobileFlagComponent;
struct ActorIsKnockedBackOnDeathFlagComponent;
struct BlazeFlagComponent;
struct ExitFromPassengerFlagComponent;
struct HorseFlagComponent;
struct HorseStandCounterComponent;
struct LavaSlimeFlagComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobEffectsComponent;
struct MobFlagComponent;
struct MobIsJumpingFlagComponent;
struct MobJumpComponent;
struct MoveInputComponent;
struct MovementAttributesComponent;
struct MovementSpeedComponent;
struct OffsetsComponent;
struct OnFireComponent;
struct OnGroundFlagComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct ShulkerBulletFlagComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct SubBBsComponent;
struct VanillaClientGameplayComponent;
struct VehicleComponent;
struct VehicleInputIntentComponent;
struct WitherSkullFlagComponent;
// clang-format on

namespace ActorMobilityUtils {
// functions
// NOLINTBEGIN
MCAPI bool canActivateElytra(
    ::MoveInputComponent const&             moveInputComponent,
    ::VanillaClientGameplayComponent const& vanillaClientGameplayComponent,
    bool                                    isGliding,
    bool                                    isFlying
);

MCAPI bool canDash(::ActorDataFlagComponent const& actorData);

MCAPI bool canJump(
    ::ActorDataFlagComponent const&     actorData,
    ::IConstBlockSource const&          region,
    ::StateVectorComponent const&       stateVector,
    ::AABBShapeComponent const&         aabbShape,
    ::GetCollisionShapeInterface const& collisionShape
);

MCAPI bool canPowerJump(::ActorDataFlagComponent const& actorData, bool hasJumpStrength, bool isMob);

MCAPI void endJump(
    ::StrictEntityContext const&      context,
    ::StateVectorComponent const&     stateVectorComponent,
    ::ActorDataJumpDurationComponent& actorDataJumpDurationComponent,
    ::ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    ::MobJumpComponent&               mobJumpComponent,
    ::VehicleComponent const*         vehicleComponent,
    ::ViewT<::StrictEntityContext, ::Include<::ParrotFlagComponent>, ::PassengerComponent const> parrotPassengers,
    ::EntityModifier<::ExitFromPassengerFlagComponent, ::StopRidingRequestComponent, ::MobIsJumpingFlagComponent>&
        modifier
);

MCAPI float getBrightness(
    ::StrictEntityContext const&                                        context,
    float                                                               alpha,
    ::IConstBlockSource const&                                          region,
    ::AABBShapeComponent const&                                         aabbShapeComponent,
    ::OffsetsComponent const&                                           offsetsComponent,
    ::StateVectorComponent const&                                       stateVectorComponent,
    ::ViewT<::StrictEntityContext, ::Include<::BlazeFlagComponent>>     blazeView,
    ::ViewT<::StrictEntityContext, ::Include<::LavaSlimeFlagComponent>> lavaSlimeView
);

MCFOLD float getJumpEffectAmplifierValue(::std::vector<::MobEffectInstance> const& mobEffects);

MCAPI float getJumpEffectAmplifierValue(::MobEffectsComponent const&);

MCAPI float getJumpPower(::JumpControlComponent const* jumpControlComponent, bool isSquid);

MCAPI ::Vec3 getPosFromAABB(::AABB const& aabb, float heightOffset);

MCAPI float getSpeed(
    ::MovementAttributesComponent const& movementAttributesComponent,
    ::MovementSpeedComponent const&      movementSpeedComponent,
    bool                                 isPlayer
);

MCAPI bool isGliding(::ActorDataFlagComponent const& actorData);

MCAPI bool isImmobile(
    ::StrictEntityContext const& context,
    ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Optional<::ActorIsImmobileFlagComponent const>>*
        actorView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobFlagComponent>,
        ::MovementAttributesComponent const,
        ::Optional<::ActorIsKnockedBackOnDeathFlagComponent const>>* mobView,
    ::ViewT<
        ::StrictEntityContext,
        ::ActorDataFlagComponent const,
        ::Optional<::VehicleInputIntentComponent const>,
        ::Include<::OnGroundFlagComponent, ::HorseFlagComponent>,
        ::Exclude<::MobAllowStandSlidingFlagComponent, ::MobIsJumpingFlagComponent>>*               horseView,
    ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>>*                                onlyHorseView,
    ::ViewT<::StrictEntityContext, ::PlayerIsSleepingFlagComponent const, ::PlayerComponent const>* playerView
);

MCAPI bool
isInLava(::IConstBlockSource const& region, ::AABBShapeComponent const& aabb, ::SubBBsComponent const& subBBs);

MCAPI bool isOnFire(
    ::ActorDataFlagComponent const&     actorDataFlagComponent,
    ::OnFireComponent const*            onFireComponent,
    ::LavaSlimeFlagComponent const*     lavaSlimeFlagComponent,
    ::ShulkerBulletFlagComponent const* shulkerBulletFlagComponent,
    ::WitherSkullFlagComponent const*   witherSkullFlagComponent,
    ::BlazeFlagComponent const*         blazeFlagComponent
);

MCAPI bool isSprinting(::ActorDataFlagComponent const& actorData);

MCAPI bool isSwimming(::ActorDataFlagComponent const& actorData);

MCAPI bool isUnderLiquid(
    ::Vec3 const&              actorPos,
    ::Vec3 const&              actorHeadPos,
    ::IConstBlockSource const& region,
    ::MaterialType             blockType
);

MCAPI void moveBBs(::Vec3 const& pos, ::SubBBsComponent& subBBs);

MCAPI void moveBBs(::Vec3 const& pos, ::AABBShapeComponent& aabb, ::SubBBsComponent& subBBs);

MCAPI bool onHoverableBlock(::IConstBlockSource const& region, ::Vec3 const& pos, ::AABB const& aabb);

MCAPI void setStanding(
    ::ActorDataFlagComponent&                     synchedActorData,
    ::optional_ref<::ActorDataHorseFlagComponent> actorDataHorseFlag,
    ::ActorDataDirtyFlagsComponent&               actorDataDirtyFlags,
    bool                                          value,
    ::HorseStandCounterComponent*                 horseStandCounterComponent,
    bool                                          isServer
);

MCAPI bool shouldApplyLava(::IConstBlockSource const& region, ::EntityContext const& entity);

MCAPI bool shouldApplyLava(
    ::IConstBlockSource const&  region,
    ::AABBShapeComponent const& aabb,
    ::SubBBsComponent const&    subBBs,
    bool                        isImmuneToLava
);

MCAPI void startSpinAttack(::EntityContext& entity, int riptideLevel);
// NOLINTEND

} // namespace ActorMobilityUtils
