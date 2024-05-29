#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifier.h"
#include "mc/enums/MaterialType.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorMobilityUtils {
// NOLINTBEGIN
// symbol:
// ?canJump@ActorMobilityUtils@@YA_NAEBUActorDataFlagComponent@@AEBVIConstBlockSource@@AEBUStateVectorComponent@@AEBUAABBShapeComponent@@AEBVGetCollisionShapeInterface@@@Z
MCAPI bool
canJump(struct ActorDataFlagComponent const& actorData, class IConstBlockSource const& region, struct StateVectorComponent const&, struct AABBShapeComponent const&, class GetCollisionShapeInterface const&);

// symbol:
// ?endJump@ActorMobilityUtils@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAUActorDataJumpDurationComponent@@AEAUActorDataDirtyFlagsComponent@@AEAUMobJumpComponent@@PEBUVehicleComponent@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UParrotFlag@@@@@@$$CBUPassengerComponent@@@@AEAV?$EntityModifier@V?$FlagComponent@UExitFromPassengerFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
MCAPI void endJump(class StrictEntityContext const&, struct StateVectorComponent const&, struct ActorDataJumpDurationComponent&, struct ActorDataDirtyFlagsComponent&, struct MobJumpComponent&, struct VehicleComponent const*, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifier<class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>>&);

// symbol:
// ?getBrightness@ActorMobilityUtils@@YAMAEBVStrictEntityContext@@MAEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEBUOffsetsComponent@@AEBUStateVectorComponent@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UBlazeFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@ULavaSlimeFlag@@@@@@@@@Z
MCAPI float
getBrightness(class StrictEntityContext const& context, float alpha, class IConstBlockSource const& region, struct AABBShapeComponent const&, struct OffsetsComponent const&, struct StateVectorComponent const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BlazeFlag>>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct LavaSlimeFlag>>>);

// symbol:
// ?getJumpEffectAmplifierValue@ActorMobilityUtils@@YAMAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
MCAPI float getJumpEffectAmplifierValue(std::vector<class MobEffectInstance> const& mobEffects);

// symbol: ?getJumpEffectAmplifierValue@ActorMobilityUtils@@YAMAEBUMobEffectsComponent@@@Z
MCAPI float getJumpEffectAmplifierValue(struct MobEffectsComponent const&);

// symbol: ?getJumpPower@ActorMobilityUtils@@YAMPEBVJumpControlComponent@@_N@Z
MCAPI float getJumpPower(class JumpControlComponent const* jumpControlComponent, bool);

// symbol: ?getPosFromAABB@ActorMobilityUtils@@YA?AVVec3@@AEBVAABB@@M@Z
MCAPI class Vec3 getPosFromAABB(class AABB const&, float);

// symbol:
// ?getSpeed@ActorMobilityUtils@@YAMAEBVStrictEntityContext@@AEBV?$ViewT@VStrictEntityContext@@$$CBUMovementAttributesComponent@@$$CBUMovementSpeedComponent@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@@Z
MCAPI float getSpeed(
    class StrictEntityContext const& entity,
    class ViewT<
        class StrictEntityContext,
        struct MovementAttributesComponent const,
        struct MovementSpeedComponent const> const&,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&
        players
);

// symbol:
// ?isImmobile@ActorMobilityUtils@@YA_NAEBVStrictEntityContext@@PEAV?$ViewT@VStrictEntityContext@@$$CBUActorDataFlagComponent@@V?$Optional@$$CBV?$FlagComponent@UActorIsImmobileFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@$$CBUMovementAttributesComponent@@V?$Optional@$$CBV?$FlagComponent@UActorIsKnockedBackOnDeathFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@$$CBUActorDataFlagComponent@@U?$Include@V?$FlagComponent@UOnGroundFlag@@@@V?$FlagComponent@UHorseFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobAllowStandSlidingFlag@@@@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@V?$FlagComponent@UHorseFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@@Z
MCAPI bool
isImmobile(class StrictEntityContext const& context, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag> const>>*, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct MovementAttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag> const>>*, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>*, class ViewT<class StrictEntityContext, class FlagComponent<struct HorseFlag>>*, class ViewT<class StrictEntityContext, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>*);

// symbol: ?isInLava@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEBUSubBBsComponent@@@Z
MCAPI bool
isInLava(class IConstBlockSource const& region, struct AABBShapeComponent const& aabb, struct SubBBsComponent const&);

// symbol:
// ?isOnFire@ActorMobilityUtils@@YA_NAEBUActorDataFlagComponent@@PEBUOnFireComponent@@PEBV?$FlagComponent@ULavaSlimeFlag@@@@PEBV?$FlagComponent@UShulkerBulletFlag@@@@PEBV?$FlagComponent@UWitherSkullFlag@@@@PEBV?$FlagComponent@UBlazeFlag@@@@@Z
MCAPI bool
isOnFire(struct ActorDataFlagComponent const&, struct OnFireComponent const*, class FlagComponent<struct LavaSlimeFlag> const*, class FlagComponent<struct ShulkerBulletFlag> const*, class FlagComponent<struct WitherSkullFlag> const*, class FlagComponent<struct BlazeFlag> const*);

// symbol: ?isSprinting@ActorMobilityUtils@@YA_NAEBUActorDataFlagComponent@@@Z
MCAPI bool isSprinting(struct ActorDataFlagComponent const&);

// symbol: ?isSwimming@ActorMobilityUtils@@YA_NAEBUActorDataFlagComponent@@@Z
MCAPI bool isSwimming(struct ActorDataFlagComponent const&);

// symbol: ?isUnderLiquid@ActorMobilityUtils@@YA_NAEBVVec3@@0AEBVIConstBlockSource@@W4MaterialType@@@Z
MCAPI bool
isUnderLiquid(class Vec3 const&, class Vec3 const&, class IConstBlockSource const& region, ::MaterialType blockType);

// symbol: ?moveBBs@ActorMobilityUtils@@YAXAEBVVec3@@AEAUSubBBsComponent@@@Z
MCAPI void moveBBs(class Vec3 const&, struct SubBBsComponent&);

// symbol: ?moveBBs@ActorMobilityUtils@@YAXAEBVVec3@@AEAUAABBShapeComponent@@AEAUSubBBsComponent@@@Z
MCAPI void moveBBs(class Vec3 const& pos, struct AABBShapeComponent& aabb, struct SubBBsComponent&);

// symbol: ?onHoverableBlock@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBVVec3@@AEBVAABB@@@Z
MCAPI bool onHoverableBlock(class IConstBlockSource const& region, class Vec3 const& pos, class AABB const& aabb);

// symbol:
// ?setSpeed@ActorMobilityUtils@@YAXAEBVStrictEntityContext@@MAEBV?$ViewT@VStrictEntityContext@@UMovementSpeedComponent@@ULocalMoveVelocityComponent@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@@Z
MCAPI void setSpeed(
    class StrictEntityContext const& entity,
    float                            speed,
    class ViewT<class StrictEntityContext, struct MovementSpeedComponent, struct LocalMoveVelocityComponent> const&,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&
        players
);

// symbol:
// ?setStanding@ActorMobilityUtils@@YAXAEAUActorDataFlagComponent@@V?$optional_ref@UActorDataHorseFlagComponent@@@@AEAUActorDataDirtyFlagsComponent@@_NPEAUHorseStandCounterComponent@@3@Z
MCAPI void setStanding(
    struct ActorDataFlagComponent&,
    class optional_ref<struct ActorDataHorseFlagComponent>,
    struct ActorDataDirtyFlagsComponent&,
    bool,
    struct HorseStandCounterComponent*,
    bool
);

// symbol: ?shouldApplyLava@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBVEntityContext@@@Z
MCAPI bool shouldApplyLava(class IConstBlockSource const& region, class EntityContext const& entity);

// symbol:
// ?shouldApplyLava@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEBUSubBBsComponent@@_N@Z
MCAPI bool
shouldApplyLava(class IConstBlockSource const&, struct AABBShapeComponent const&, struct SubBBsComponent const&, bool);
// NOLINTEND

}; // namespace ActorMobilityUtils
