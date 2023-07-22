/**
 * @file  ActorMobilityUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorMobilityUtils.
 *
 */
namespace ActorMobilityUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?actorSetSize\@ActorMobilityUtils\@\@YAXAEAVStrictEntityContext\@\@AEBVVec2\@\@AEAUSynchedActorDataComponent\@\@AEAUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@UOffsetsComponent\@\@\@\@\@Z
     */
    MCAPI void actorSetSize(class StrictEntityContext &, class Vec2 const &, struct SynchedActorDataComponent &, struct AABBShapeComponent &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasPenetratingLastFrameFlag>> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct OffsetsComponent>);
    /**
     * @symbol  ?canBeginOrContinueClimbingLadder\@ActorMobilityUtils\@\@YA_NAEBUAABBShapeComponent\@\@AEBVIConstBlockSource\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@_N4\@Z
     */
    MCAPI bool canBeginOrContinueClimbingLadder(struct AABBShapeComponent const &, class IConstBlockSource const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, bool, bool);
    /**
     * @symbol  ?canDash\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI bool canDash(struct SynchedActorDataComponent const &);
    /**
     * @symbol  ?canPowerJump\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@PEBUAttributesComponent\@\@_N\@Z
     */
    MCAPI bool canPowerJump(struct SynchedActorDataComponent const &, struct AttributesComponent const *, bool);
    /**
     * @symbol  ?endJump\@ActorMobilityUtils\@\@YAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAUMobJumpComponent\@\@AEAUSynchedActorDataComponent\@\@PEBUVehicleComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UParrotFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void endJump(class StrictEntityContext const &, struct StateVectorComponent const &, struct MobJumpComponent &, struct SynchedActorDataComponent &, struct VehicleComponent const *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>> &);
    /**
     * @symbol  ?getBrightness\@ActorMobilityUtils\@\@YAMAEBVStrictEntityContext\@\@MAEBVIConstBlockSource\@\@AEBUAABBShapeComponent\@\@AEBUOffsetsComponent\@\@AEBUStateVectorComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBlazeFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULavaSlimeFlag\@\@\@\@\@\@\@\@\@Z
     */
    MCAPI float getBrightness(class StrictEntityContext const &, float, class IConstBlockSource const &, struct AABBShapeComponent const &, struct OffsetsComponent const &, struct StateVectorComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BlazeFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LavaSlimeFlag>>>);
    /**
     * @symbol  ?getJumpEffectAmplifierValue\@ActorMobilityUtils\@\@YAMAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI float getJumpEffectAmplifierValue(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol  ?getJumpPower\@ActorMobilityUtils\@\@YAMPEBVJumpControlComponent\@\@_N\@Z
     */
    MCAPI float getJumpPower(class JumpControlComponent const *, bool);
    /**
     * @symbol  ?getPosFromAABB\@ActorMobilityUtils\@\@YA?AVVec3\@\@AEBVAABB\@\@MAEBVVec2\@\@\@Z
     */
    MCAPI class Vec3 getPosFromAABB(class AABB const &, float, class Vec2 const &);
    /**
     * @symbol  ?isFlying\@ActorMobilityUtils\@\@YA_NAEBUAbilitiesComponent\@\@\@Z
     */
    MCAPI bool isFlying(struct AbilitiesComponent const &);
    /**
     * @symbol  ?isFree\@ActorMobilityUtils\@\@YA_NAEBVIConstBlockSource\@\@AEBVAABB\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI bool isFree(class IConstBlockSource const &, class AABB const &, class Vec3 const &, float);
    /**
     * @symbol  ?isImmersedInWater\@ActorMobilityUtils\@\@YA_NAEBVVec3\@\@AEBVIConstBlockSource\@\@AEBVVec2\@\@\@Z
     */
    MCAPI bool isImmersedInWater(class Vec3 const &, class IConstBlockSource const &, class Vec2 const &);
    /**
     * @symbol  ?isImmobile\@ActorMobilityUtils\@\@YA_NAEBVStrictEntityContext\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsImmobileFlag\@\@\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUAttributesComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsKnockedBackOnDeathFlag\@\@\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@PEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@Z
     */
    MCAPI bool isImmobile(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const> *);
    /**
     * @symbol  ?isInLava\@ActorMobilityUtils\@\@YA_NAEBVIConstBlockSource\@\@AEBUAABBShapeComponent\@\@AEBUSubBBsComponent\@\@\@Z
     */
    MCAPI bool isInLava(class IConstBlockSource const &, struct AABBShapeComponent const &, struct SubBBsComponent const &);
    /**
     * @symbol  ?isOnFire\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@PEBUOnFireComponent\@\@PEBV?$FlagComponent\@ULavaSlimeFlag\@\@\@\@PEBV?$FlagComponent\@UShulkerBulletFlag\@\@\@\@PEBV?$FlagComponent\@UWitherSkullFlag\@\@\@\@PEBV?$FlagComponent\@UBlazeFlag\@\@\@\@\@Z
     */
    MCAPI bool isOnFire(struct SynchedActorDataComponent const &, struct OnFireComponent const *, class FlagComponent<struct LavaSlimeFlag> const *, class FlagComponent<struct ShulkerBulletFlag> const *, class FlagComponent<struct WitherSkullFlag> const *, class FlagComponent<struct BlazeFlag> const *);
    /**
     * @symbol  ?isSprinting\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI bool isSprinting(struct SynchedActorDataComponent const &);
    /**
     * @symbol  ?isSwimming\@ActorMobilityUtils\@\@YA_NAEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI bool isSwimming(struct SynchedActorDataComponent const &);
    /**
     * @symbol  ?isUnderLiquid\@ActorMobilityUtils\@\@YA_NAEBVVec3\@\@0AEBVIConstBlockSource\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool isUnderLiquid(class Vec3 const &, class Vec3 const &, class IConstBlockSource const &, enum class MaterialType);
    /**
     * @symbol  ?moveBBs\@ActorMobilityUtils\@\@YAXAEBVVec3\@\@AEAUAABBShapeComponent\@\@AEAUSubBBsComponent\@\@\@Z
     */
    MCAPI void moveBBs(class Vec3 const &, struct AABBShapeComponent &, struct SubBBsComponent &);
    /**
     * @symbol  ?onClimbableBlock\@ActorMobilityUtils\@\@YA_NAEBUAABBShapeComponent\@\@AEBVIConstBlockSource\@\@AEBUStateVectorComponent\@\@_N3\@Z
     */
    MCAPI bool onClimbableBlock(struct AABBShapeComponent const &, class IConstBlockSource const &, struct StateVectorComponent const &, bool, bool);
    /**
     * @symbol  ?setLocalPlayerSneaking\@ActorMobilityUtils\@\@YAXAEAUSynchedActorDataComponent\@\@PEAUPlayerActionComponent\@\@_N\@Z
     */
    MCAPI void setLocalPlayerSneaking(struct SynchedActorDataComponent &, struct PlayerActionComponent *, bool);
    /**
     * @symbol  ?setSprinting\@ActorMobilityUtils\@\@YAXAEAUAttributesComponent\@\@AEAUSynchedActorDataComponent\@\@V?$optional_ref\@UPlayerActionComponent\@\@\@\@_N\@Z
     */
    MCAPI void setSprinting(struct AttributesComponent &, struct SynchedActorDataComponent &, class optional_ref<struct PlayerActionComponent>, bool);
    /**
     * @symbol  ?setStanding\@ActorMobilityUtils\@\@YAXVSynchedActorDataWriter\@\@_NPEAUHorseStandCounterComponent\@\@1\@Z
     */
    MCAPI void setStanding(class SynchedActorDataWriter, bool, struct HorseStandCounterComponent *, bool);
    /**
     * @symbol  ?shouldApplyWaterGravity\@ActorMobilityUtils\@\@YA_NPEBVNavigationComponent\@\@PEBVPhysicsComponent\@\@VSynchedActorDataReader\@\@AEBVVec3\@\@AEBVIConstBlockSource\@\@AEBVVec2\@\@\@Z
     */
    MCAPI bool shouldApplyWaterGravity(class NavigationComponent const *, class PhysicsComponent const *, class SynchedActorDataReader, class Vec3 const &, class IConstBlockSource const &, class Vec2 const &);
    /**
     * @symbol  ?updateBBFromDefinition\@ActorMobilityUtils\@\@YAXAEAVStrictEntityContext\@\@V?$optional_ref\@$$CBUCollisionBoxDefinitionComponent\@\@\@\@AEAUSynchedActorDataComponent\@\@AEAUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@UOffsetsComponent\@\@\@\@\@Z
     */
    MCAPI void updateBBFromDefinition(class StrictEntityContext &, class optional_ref<struct CollisionBoxDefinitionComponent const>, struct SynchedActorDataComponent &, struct AABBShapeComponent &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasPenetratingLastFrameFlag>> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct OffsetsComponent>);

};