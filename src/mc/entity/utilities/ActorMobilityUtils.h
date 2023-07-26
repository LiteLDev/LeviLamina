#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
template<typename T0> class optional_ref;
template<typename... T0> struct Exclude;
template<typename... T0> struct Include;
// clang-format on

namespace ActorMobilityUtils {
/**
 * @symbol ?_playerOnSizeUpdated\@ActorMobilityUtils\@\@YAXV?$optional_ref\@UOffsetsComponent\@\@\@\@\@Z
 */
MCAPI void _playerOnSizeUpdated(class optional_ref<struct OffsetsComponent>); // NOLINT
/**
 * @symbol
 * ?actorSetSize\@ActorMobilityUtils\@\@YA?AW4ActorShouldCallOnSetSize\@\@AEBVStrictEntityContext\@\@AEBVVec2\@\@AEAUSynchedActorDataComponent\@\@AEAUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@UOffsetsComponent\@\@\@\@\@Z
 */
MCAPI enum class ActorShouldCallOnSetSize
actorSetSize(class StrictEntityContext const&, class Vec2 const&, struct SynchedActorDataComponent&, struct AABBShapeComponent&, struct StateVectorComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasPenetratingLastFrameFlag>>&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct OffsetsComponent>); // NOLINT
/**
 * @symbol ?allowAscendingScaffolding\@ActorMobilityUtils\@\@YA_NPEBV?$FlagComponent\@UWasAutoJumpingFlag\@\@\@\@\@Z
 */
MCAPI bool allowAscendingScaffolding(class FlagComponent<struct WasAutoJumpingFlag> const*); // NOLINT
/**
 * @symbol
 * ?applyFinalFriction\@ActorMobilityUtils\@\@YAXPEBUCurrentLocalMoveVelocityComponent\@\@PEBV?$FlagComponent\@UVexFlag\@\@\@\@PEBUAbilitiesComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUStateVectorComponent\@\@M_N5\@Z
 */
MCAPI void applyFinalFriction(
    struct CurrentLocalMoveVelocityComponent const*,
    class FlagComponent<struct VexFlag> const*,
    struct AbilitiesComponent const*,
    struct SynchedActorDataComponent const&,
    struct StateVectorComponent&,
    float,
    bool,
    bool
); // NOLINT
/**
 * @symbol
 * ?canBeginOrContinueClimbingLadder\@ActorMobilityUtils\@\@YA_NAEBUAABBShapeComponent\@\@AEBVIConstBlockSource\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@_N4\@Z
 */
MCAPI bool canBeginOrContinueClimbingLadder(
    struct AABBShapeComponent const&,
    class IConstBlockSource const&,
    struct StateVectorComponent const&,
    struct SynchedActorDataComponent const&,
    bool,
    bool
); // NOLINT
/**
 * @symbol ?canDash\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
 */
MCAPI bool canDash(struct SynchedActorDataComponent const&); // NOLINT
/**
 * @symbol
 * ?canJump\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@AEBVIConstBlockSource\@\@AEBUStateVectorComponent\@\@AEBUAABBShapeComponent\@\@AEBVGetCollisionShapeInterface\@\@\@Z
 */
MCAPI bool
canJump(struct SynchedActorDataComponent const&, class IConstBlockSource const&, struct StateVectorComponent const&, struct AABBShapeComponent const&, class GetCollisionShapeInterface const&); // NOLINT
/**
 * @symbol ?canPowerJump\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@PEBUAttributesComponent\@\@_N\@Z
 */
MCAPI bool canPowerJump(struct SynchedActorDataComponent const&, struct AttributesComponent const*, bool); // NOLINT
/**
 * @symbol
 * ?endJump\@ActorMobilityUtils\@\@YAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAUMobJumpComponent\@\@AEAUSynchedActorDataComponent\@\@PEBUVehicleComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UParrotFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
endJump(class StrictEntityContext const&, struct StateVectorComponent const&, struct MobJumpComponent&, struct SynchedActorDataComponent&, struct VehicleComponent const*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>>&); // NOLINT
/**
 * @symbol
 * ?getBlockWhenClimbing\@ActorMobilityUtils\@\@YAAEBVBlock\@\@AEBUAABBShapeComponent\@\@AEBVIConstBlockSource\@\@AEBUStateVectorComponent\@\@\@Z
 */
MCAPI class Block const&
getBlockWhenClimbing(struct AABBShapeComponent const&, class IConstBlockSource const&, struct StateVectorComponent const&); // NOLINT
/**
 * @symbol
 * ?getBrightness\@ActorMobilityUtils\@\@YAMAEBVStrictEntityContext\@\@MAEBVIConstBlockSource\@\@AEBUAABBShapeComponent\@\@AEBUOffsetsComponent\@\@AEBUStateVectorComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBlazeFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULavaSlimeFlag\@\@\@\@\@\@\@\@\@Z
 */
MCAPI float getBrightness(class StrictEntityContext const&, float, class IConstBlockSource const&, struct AABBShapeComponent const&, struct OffsetsComponent const&, struct StateVectorComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BlazeFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LavaSlimeFlag>>>); // NOLINT
/**
 * @symbol
 * ?getJumpEffectAmplifierValue\@ActorMobilityUtils\@\@YAMAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI float getJumpEffectAmplifierValue(std::vector<class MobEffectInstance> const&); // NOLINT
/**
 * @symbol ?getJumpEffectAmplifierValue\@ActorMobilityUtils\@\@YAMAEBUMobEffectsComponent\@\@\@Z
 */
MCAPI float getJumpEffectAmplifierValue(struct MobEffectsComponent const&); // NOLINT
/**
 * @symbol ?getJumpPower\@ActorMobilityUtils\@\@YAMPEBVJumpControlComponent\@\@_N\@Z
 */
MCAPI float getJumpPower(class JumpControlComponent const*, bool); // NOLINT
/**
 * @symbol ?getPosFromAABB\@ActorMobilityUtils\@\@YA?AVVec3\@\@AEBVAABB\@\@MAEBVVec2\@\@\@Z
 */
MCAPI class Vec3 getPosFromAABB(class AABB const&, float, class Vec2 const&); // NOLINT
/**
 * @symbol
 * ?getSpeed\@ActorMobilityUtils\@\@YAMAEBVStrictEntityContext\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAttributesComponent\@\@$$CBUMovementSpeedComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@\@Z
 */
MCAPI float getSpeed(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AttributesComponent const, struct MovementSpeedComponent const> const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&); // NOLINT
/**
 * @symbol ?isFlying\@ActorMobilityUtils\@\@YA_NAEBUAbilitiesComponent\@\@\@Z
 */
MCAPI bool isFlying(struct AbilitiesComponent const&); // NOLINT
/**
 * @symbol ?isFree\@ActorMobilityUtils\@\@YA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@AEBVVec3\@\@M\@Z
 */
MCAPI bool isFree(class IConstBlockSource const&, class AABB const&, class Vec3 const&, float); // NOLINT
/**
 * @symbol ?isGliding\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
 */
MCAPI bool isGliding(struct SynchedActorDataComponent const&); // NOLINT
/**
 * @symbol ?isImmersedInWater\@ActorMobilityUtils\@\@YA_NAEBVVec3\@\@AEBVIConstBlockSource\@\@AEBVVec2\@\@\@Z
 */
MCAPI bool isImmersedInWater(class Vec3 const&, class IConstBlockSource const&, class Vec2 const&); // NOLINT
/**
 * @symbol
 * ?isImmobile\@ActorMobilityUtils\@\@YA_NAEBVStrictEntityContext\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsImmobileFlag\@\@\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUAttributesComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsKnockedBackOnDeathFlag\@\@\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@Z
 */
MCAPI bool
isImmobile(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>*); // NOLINT
/**
 * @symbol
 * ?isInLava\@ActorMobilityUtils\@\@YA_NAEBVIConstBlockSource\@\@AEBUAABBShapeComponent\@\@AEBUSubBBsComponent\@\@\@Z
 */
MCAPI bool
isInLava(class IConstBlockSource const&, struct AABBShapeComponent const&, struct SubBBsComponent const&); // NOLINT
/**
 * @symbol
 * ?isOnFire\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@PEBUOnFireComponent\@\@PEBV?$FlagComponent\@ULavaSlimeFlag\@\@\@\@PEBV?$FlagComponent\@UShulkerBulletFlag\@\@\@\@PEBV?$FlagComponent\@UWitherSkullFlag\@\@\@\@PEBV?$FlagComponent\@UBlazeFlag\@\@\@\@\@Z
 */
MCAPI bool
isOnFire(struct SynchedActorDataComponent const&, struct OnFireComponent const*, class FlagComponent<struct LavaSlimeFlag> const*, class FlagComponent<struct ShulkerBulletFlag> const*, class FlagComponent<struct WitherSkullFlag> const*, class FlagComponent<struct BlazeFlag> const*); // NOLINT
/**
 * @symbol ?isSneaking\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
 */
MCAPI bool isSneaking(struct SynchedActorDataComponent const&); // NOLINT
/**
 * @symbol ?isSprinting\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
 */
MCAPI bool isSprinting(struct SynchedActorDataComponent const&); // NOLINT
/**
 * @symbol ?isSwimming\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
 */
MCAPI bool isSwimming(struct SynchedActorDataComponent const&); // NOLINT
/**
 * @symbol ?isUnderLiquid\@ActorMobilityUtils\@\@YA_NAEBVVec3\@\@0AEBVIConstBlockSource\@\@W4MaterialType\@\@\@Z
 */
MCAPI bool
isUnderLiquid(class Vec3 const&, class Vec3 const&, class IConstBlockSource const&, enum class MaterialType); // NOLINT
/**
 * @symbol ?moveBBs\@ActorMobilityUtils\@\@YAXAEBVVec3\@\@AEAUAABBShapeComponent\@\@AEAUSubBBsComponent\@\@\@Z
 */
MCAPI void moveBBs(class Vec3 const&, struct AABBShapeComponent&, struct SubBBsComponent&); // NOLINT
/**
 * @symbol
 * ?onClimbableBlock\@ActorMobilityUtils\@\@YA_NAEBUAABBShapeComponent\@\@AEBVIConstBlockSource\@\@AEBUStateVectorComponent\@\@_N3\@Z
 */
MCAPI bool onClimbableBlock(
    struct AABBShapeComponent const&,
    class IConstBlockSource const&,
    struct StateVectorComponent const&,
    bool,
    bool
); // NOLINT
/**
 * @symbol ?onHoverableBlock\@ActorMobilityUtils\@\@YA_NAEBVIConstBlockSource\@\@AEBVVec3\@\@AEBVAABB\@\@\@Z
 */
MCAPI bool onHoverableBlock(class IConstBlockSource const&, class Vec3 const&, class AABB const&); // NOLINT
/**
 * @symbol
 * ?setSpeed\@ActorMobilityUtils\@\@YAXAEBVStrictEntityContext\@\@MAEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UMovementSpeedComponent\@\@ULocalMoveVelocityComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@\@Z
 */
MCAPI void setSpeed(class StrictEntityContext const&, float, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MovementSpeedComponent, struct LocalMoveVelocityComponent> const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&); // NOLINT
/**
 * @symbol
 * ?setSprinting\@ActorMobilityUtils\@\@YAXAEAUAttributesComponent\@\@AEAUSynchedActorDataComponent\@\@V?$optional_ref\@UPlayerActionComponent\@\@\@\@_N\@Z
 */
MCAPI void setSprinting(
    struct AttributesComponent&,
    struct SynchedActorDataComponent&,
    class optional_ref<struct PlayerActionComponent>,
    bool
); // NOLINT
/**
 * @symbol ?setStanding\@ActorMobilityUtils\@\@YAXVSynchedActorDataWriter\@\@_NPEAUHorseStandCounterComponent\@\@1\@Z
 */
MCAPI void setStanding(class SynchedActorDataWriter, bool, struct HorseStandCounterComponent*, bool); // NOLINT
/**
 * @symbol ?shouldApplyLava\@ActorMobilityUtils\@\@YA_NAEBVIConstBlockSource\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI bool shouldApplyLava(class IConstBlockSource const&, class EntityContext const&); // NOLINT
/**
 * @symbol
 * ?shouldApplyWaterGravity\@ActorMobilityUtils\@\@YA_NPEBVNavigationComponent\@\@PEBVPhysicsComponent\@\@VSynchedActorDataReader\@\@AEBVVec3\@\@AEBVIConstBlockSource\@\@AEBVVec2\@\@\@Z
 */
MCAPI bool
shouldApplyWaterGravity(class NavigationComponent const*, class PhysicsComponent const*, class SynchedActorDataReader, class Vec3 const&, class IConstBlockSource const&, class Vec2 const&); // NOLINT
/**
 * @symbol ?tryApplyingLevitation\@ActorMobilityUtils\@\@YA_NAEBUMobEffectsComponent\@\@AEAUStateVectorComponent\@\@\@Z
 */
MCAPI bool tryApplyingLevitation(struct MobEffectsComponent const&, struct StateVectorComponent&); // NOLINT

}; // namespace ActorMobilityUtils
