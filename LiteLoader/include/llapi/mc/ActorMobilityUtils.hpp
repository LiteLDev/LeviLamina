/**
 * @file  ActorMobilityUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   327726543
     * @symbol ?endJump@ActorMobilityUtils@@YAXAEBUStateVectorComponent@@AEAUMobJumpComponent@@AEAUSynchedActorDataComponent@@PEBUVehicleComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UParrotFlag@@@@@@$$CBUPassengerComponent@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UExitFromPassengerFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
     */
    MCAPI void endJump(struct StateVectorComponent const &, struct MobJumpComponent &, struct SynchedActorDataComponent &, struct VehicleComponent const *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>> &);
    /**
     * @hash   -346438838
     * @symbol ?getJumpPower@ActorMobilityUtils@@YAMPEBVJumpControlComponent@@PEBV?$FlagComponent@USquidFlag@@@@@Z
     */
    MCAPI float getJumpPower(class JumpControlComponent const *, class FlagComponent<struct SquidFlag> const *);
    /**
     * @hash   -1422131534
     * @symbol ?getPosFromAABB@ActorMobilityUtils@@YA?AVVec3@@AEBVAABB@@MAEBVVec2@@@Z
     */
    MCAPI class Vec3 getPosFromAABB(class AABB const &, float, class Vec2 const &);
    /**
     * @hash   1008441550
     * @symbol ?isFlying@ActorMobilityUtils@@YA_NAEBUAbilitiesComponent@@@Z
     */
    MCAPI bool isFlying(struct AbilitiesComponent const &);
    /**
     * @hash   -1826198305
     * @symbol ?isFree@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBVAABB@@AEBVVec3@@M@Z
     */
    MCAPI bool isFree(class IConstBlockSource const &, class AABB const &, class Vec3 const &, float);
    /**
     * @hash   546425350
     * @symbol ?isImmersedInWater@ActorMobilityUtils@@YA_NAEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
     */
    MCAPI bool isImmersedInWater(class Vec3 const &, class IConstBlockSource const &, class Vec2 const &);
    /**
     * @symbol ?isImmobile@ActorMobilityUtils@@YA_NAEBVStrictEntityContext@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUSynchedActorDataComponent@@V?$Optional@V?$FlagComponent@UActorIsImmobileFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUAttributesComponent@@V?$Optional@V?$FlagComponent@UActorIsKnockedBackOnDeathFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUSynchedActorDataComponent@@$$CBUMobJumpComponent@@U?$Include@V?$FlagComponent@UOnGroundFlag@@@@V?$FlagComponent@UHorseFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobAllowStandSlidingFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@V?$FlagComponent@UHorseFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@@Z
     */
    MCAPI bool isImmobile(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct MobJumpComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const> *);
    /**
     * @hash   1965940048
     * @symbol ?isUnderLiquid@ActorMobilityUtils@@YA_NAEBVVec3@@0AEBVIConstBlockSource@@W4MaterialType@@@Z
     */
    MCAPI bool isUnderLiquid(class Vec3 const &, class Vec3 const &, class IConstBlockSource const &, enum MaterialType);
    /**
     * @symbol ?moveBBs@ActorMobilityUtils@@YAXAEBVVec3@@AEAUAABBShapeComponent@@AEAUSubBBsComponent@@PEAVHitboxComponent@@@Z
     */
    MCAPI void moveBBs(class Vec3 const &, struct AABBShapeComponent &, struct SubBBsComponent &, class HitboxComponent *);
    /**
     * @symbol ?shouldApplyWaterGravity@ActorMobilityUtils@@YA_NPEBVNavigationComponent@@PEBVPhysicsComponent@@VSynchedActorDataReader@@AEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
     */
    MCAPI bool shouldApplyWaterGravity(class NavigationComponent const *, class PhysicsComponent const *, class SynchedActorDataReader, class Vec3 const &, class IConstBlockSource const &, class Vec2 const &);

};