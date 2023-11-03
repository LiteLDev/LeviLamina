#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/entity/utilities/ActorShouldCallOnSetSize.h"
#include "mc/enums/MaterialType.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorMobilityUtils {
// NOLINTBEGIN
// symbol: ?_playerOnSizeUpdated@ActorMobilityUtils@@YAXV?$optional_ref@UOffsetsComponent@@@@@Z
MCAPI void _playerOnSizeUpdated(class optional_ref<struct OffsetsComponent>);

// symbol:
// ?actorSetSize@ActorMobilityUtils@@YA?AW4ActorShouldCallOnSetSize@@AEBVStrictEntityContext@@AEBVVec2@@AEAUSynchedActorDataComponent@@AEAUAABBShapeComponent@@AEBUStateVectorComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UWasPenetratingLastFrameFlag@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@UOffsetsComponent@@@@@Z
MCAPI ::ActorShouldCallOnSetSize
actorSetSize(class StrictEntityContext const&, class Vec2 const&, struct SynchedActorDataComponent&, struct AABBShapeComponent&, struct StateVectorComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasPenetratingLastFrameFlag>>&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct OffsetsComponent>);

// symbol:
// ?applyFinalFriction@ActorMobilityUtils@@YAXPEBUCurrentLocalMoveVelocityComponent@@PEBV?$FlagComponent@UVexFlag@@@@PEBUAbilitiesComponent@@AEBUSynchedActorDataComponent@@AEAUStateVectorComponent@@M_N5@Z
MCAPI void applyFinalFriction(
    struct CurrentLocalMoveVelocityComponent const*,
    class FlagComponent<struct VexFlag> const*,
    struct AbilitiesComponent const*,
    struct SynchedActorDataComponent const&,
    struct StateVectorComponent&,
    float,
    bool,
    bool
);

// symbol: ?canActivateElytra@ActorMobilityUtils@@YA_NAEBUMoveInputComponent@@AEBUVanillaClientGameplayComponent@@_N2@Z
MCAPI bool
canActivateElytra(struct MoveInputComponent const&, struct VanillaClientGameplayComponent const&, bool, bool);

// symbol:
// ?canJump@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@AEBVIConstBlockSource@@AEBUStateVectorComponent@@AEBUAABBShapeComponent@@AEBVGetCollisionShapeInterface@@@Z
MCAPI bool
canJump(struct SynchedActorDataComponent const&, class IConstBlockSource const&, struct StateVectorComponent const&, struct AABBShapeComponent const&, class GetCollisionShapeInterface const&);

// symbol:
// ?endJump@ActorMobilityUtils@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAUMobJumpComponent@@AEAUSynchedActorDataComponent@@PEBUVehicleComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UParrotFlag@@@@@@$$CBUPassengerComponent@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UExitFromPassengerFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
MCAPI void
endJump(class StrictEntityContext const&, struct StateVectorComponent const&, struct MobJumpComponent&, struct SynchedActorDataComponent&, struct VehicleComponent const*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>>&);

// symbol:
// ?getBrightness@ActorMobilityUtils@@YAMAEBVStrictEntityContext@@MAEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEBUOffsetsComponent@@AEBUStateVectorComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UBlazeFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@ULavaSlimeFlag@@@@@@@@@Z
MCAPI float getBrightness(class StrictEntityContext const&, float, class IConstBlockSource const&, struct AABBShapeComponent const&, struct OffsetsComponent const&, struct StateVectorComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BlazeFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LavaSlimeFlag>>>);

// symbol:
// ?getJumpEffectAmplifierValue@ActorMobilityUtils@@YAMAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
MCAPI float getJumpEffectAmplifierValue(std::vector<class MobEffectInstance> const&);

// symbol: ?getJumpEffectAmplifierValue@ActorMobilityUtils@@YAMAEBUMobEffectsComponent@@@Z
MCAPI float getJumpEffectAmplifierValue(struct MobEffectsComponent const&);

// symbol: ?getJumpPower@ActorMobilityUtils@@YAMPEBVJumpControlComponent@@_N@Z
MCAPI float getJumpPower(class JumpControlComponent const*, bool);

// symbol: ?getPosFromAABB@ActorMobilityUtils@@YA?AVVec3@@AEBVAABB@@MAEBVVec2@@@Z
MCAPI class Vec3 getPosFromAABB(class AABB const&, float, class Vec2 const&);

// symbol:
// ?getSpeed@ActorMobilityUtils@@YAMAEBVStrictEntityContext@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUAttributesComponent@@$$CBUMovementSpeedComponent@@@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@@Z
MCAPI float
getSpeed(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AttributesComponent const, struct MovementSpeedComponent const> const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&);

// symbol: ?isFlying@ActorMobilityUtils@@YA_NAEBUAbilitiesComponent@@@Z
MCAPI bool isFlying(struct AbilitiesComponent const&);

// symbol: ?isGliding@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@@Z
MCAPI bool isGliding(struct SynchedActorDataComponent const&);

// symbol: ?isImmersedInWater@ActorMobilityUtils@@YA_NAEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
MCAPI bool isImmersedInWater(class Vec3 const&, class IConstBlockSource const&, class Vec2 const&);

// symbol:
// ?isImmobile@ActorMobilityUtils@@YA_NAEBVStrictEntityContext@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUSynchedActorDataComponent@@V?$Optional@V?$FlagComponent@UActorIsImmobileFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@$$CBUAttributesComponent@@V?$Optional@V?$FlagComponent@UActorIsKnockedBackOnDeathFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUSynchedActorDataComponent@@U?$Include@V?$FlagComponent@UOnGroundFlag@@@@V?$FlagComponent@UHorseFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobAllowStandSlidingFlag@@@@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@V?$FlagComponent@UHorseFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@@Z
MCAPI bool
isImmobile(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>>*, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>*);

// symbol: ?isInLava@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEBUSubBBsComponent@@@Z
MCAPI bool isInLava(class IConstBlockSource const&, struct AABBShapeComponent const&, struct SubBBsComponent const&);

// symbol:
// ?isOnFire@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@PEBUOnFireComponent@@PEBV?$FlagComponent@ULavaSlimeFlag@@@@PEBV?$FlagComponent@UShulkerBulletFlag@@@@PEBV?$FlagComponent@UWitherSkullFlag@@@@PEBV?$FlagComponent@UBlazeFlag@@@@@Z
MCAPI bool
isOnFire(struct SynchedActorDataComponent const&, struct OnFireComponent const*, class FlagComponent<struct LavaSlimeFlag> const*, class FlagComponent<struct ShulkerBulletFlag> const*, class FlagComponent<struct WitherSkullFlag> const*, class FlagComponent<struct BlazeFlag> const*);

// symbol: ?isSprinting@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@@Z
MCAPI bool isSprinting(struct SynchedActorDataComponent const&);

// symbol: ?isSwimming@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@@Z
MCAPI bool isSwimming(struct SynchedActorDataComponent const&);

// symbol: ?isUnderLiquid@ActorMobilityUtils@@YA_NAEBVVec3@@0AEBVIConstBlockSource@@W4MaterialType@@@Z
MCAPI bool isUnderLiquid(class Vec3 const&, class Vec3 const&, class IConstBlockSource const&, ::MaterialType);

// symbol: ?moveBBs@ActorMobilityUtils@@YAXAEBVVec3@@AEAUAABBShapeComponent@@AEAUSubBBsComponent@@@Z
MCAPI void moveBBs(class Vec3 const&, struct AABBShapeComponent&, struct SubBBsComponent&);

// symbol: ?onHoverableBlock@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBVVec3@@AEBVAABB@@@Z
MCAPI bool onHoverableBlock(class IConstBlockSource const&, class Vec3 const&, class AABB const&);

// symbol:
// ?setSpeed@ActorMobilityUtils@@YAXAEBVStrictEntityContext@@MAEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@UMovementSpeedComponent@@ULocalMoveVelocityComponent@@@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@@Z
MCAPI void
setSpeed(class StrictEntityContext const&, float, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MovementSpeedComponent, struct LocalMoveVelocityComponent> const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&);

// symbol: ?setSprinting@ActorMobilityUtils@@YAXAEAUAttributesComponent@@AEAUSynchedActorDataComponent@@_N@Z
MCAPI void setSprinting(struct AttributesComponent&, struct SynchedActorDataComponent&, bool);

// symbol: ?setStanding@ActorMobilityUtils@@YAXVSynchedActorDataWriter@@_NPEAUHorseStandCounterComponent@@1@Z
MCAPI void setStanding(class SynchedActorDataWriter, bool, struct HorseStandCounterComponent*, bool);

// symbol: ?shouldApplyLava@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBVEntityContext@@@Z
MCAPI bool shouldApplyLava(class IConstBlockSource const&, class EntityContext const&);

// symbol:
// ?shouldApplyWaterGravity@ActorMobilityUtils@@YA_NPEBVNavigationComponent@@PEBVPhysicsComponent@@VSynchedActorDataReader@@AEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
MCAPI bool
shouldApplyWaterGravity(class NavigationComponent const*, class PhysicsComponent const*, class SynchedActorDataReader, class Vec3 const&, class IConstBlockSource const&, class Vec2 const&);

// symbol: ?tryApplyingLevitation@ActorMobilityUtils@@YA_NAEBUMobEffectsComponent@@AEAUStateVectorComponent@@@Z
MCAPI bool tryApplyingLevitation(struct MobEffectsComponent const&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace ActorMobilityUtils
