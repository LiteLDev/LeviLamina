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
MCAPI bool
canActivateElytra(struct MoveInputComponent const&, struct VanillaClientGameplayComponent const&, bool, bool);

MCAPI bool canDash(struct ActorDataFlagComponent const&);

MCAPI bool
canJump(struct ActorDataFlagComponent const& actorData, class IConstBlockSource const& region, struct StateVectorComponent const&, struct AABBShapeComponent const&, class GetCollisionShapeInterface const&);

MCAPI bool canPowerJump(struct ActorDataFlagComponent const&, bool, bool);

MCAPI void endJump(class StrictEntityContext const&, struct StateVectorComponent const&, struct ActorDataJumpDurationComponent&, struct ActorDataDirtyFlagsComponent&, struct MobJumpComponent&, struct VehicleComponent const*, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifier<class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>>&);

MCAPI float
getBrightness(class StrictEntityContext const& context, float alpha, class IConstBlockSource const& region, struct AABBShapeComponent const&, struct OffsetsComponent const&, struct StateVectorComponent const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BlazeFlag>>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct LavaSlimeFlag>>>);

MCAPI float getJumpEffectAmplifierValue(std::vector<class MobEffectInstance> const& mobEffects);

MCAPI float getJumpEffectAmplifierValue(struct MobEffectsComponent const&);

MCAPI float getJumpPower(class JumpControlComponent const* jumpControlComponent, bool);

MCAPI class Vec3 getPosFromAABB(class AABB const&, float);

MCAPI float getSpeed(
    class StrictEntityContext const& entity,
    class ViewT<
        class StrictEntityContext,
        struct MovementAttributesComponent const,
        struct MovementSpeedComponent const> const&,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&
        players
);

MCAPI bool isGliding(struct ActorDataFlagComponent const&);

MCAPI bool
isImmobile(class StrictEntityContext const& context, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag> const>>*, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct MovementAttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag> const>>*, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const, struct Include<struct OnGroundFlagComponent, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>*, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>>*, class ViewT<class StrictEntityContext, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>*);

MCAPI bool
isInLava(class IConstBlockSource const& region, struct AABBShapeComponent const& aabb, struct SubBBsComponent const&);

MCAPI bool
isOnFire(struct ActorDataFlagComponent const&, struct OnFireComponent const*, class FlagComponent<struct LavaSlimeFlag> const*, class FlagComponent<struct ShulkerBulletFlag> const*, class FlagComponent<struct WitherSkullFlag> const*, class FlagComponent<struct BlazeFlag> const*);

MCAPI bool isSprinting(struct ActorDataFlagComponent const&);

MCAPI bool isSwimming(struct ActorDataFlagComponent const&);

MCAPI bool
isUnderLiquid(class Vec3 const&, class Vec3 const&, class IConstBlockSource const& region, ::MaterialType blockType);

MCAPI void moveBBs(class Vec3 const&, struct SubBBsComponent&);

MCAPI void moveBBs(class Vec3 const& pos, struct AABBShapeComponent& aabb, struct SubBBsComponent&);

MCAPI bool onHoverableBlock(class IConstBlockSource const& region, class Vec3 const& pos, class AABB const& aabb);

MCAPI void setSpeed(
    class StrictEntityContext const& entity,
    float                            speed,
    class ViewT<class StrictEntityContext, struct MovementSpeedComponent, struct LocalMoveVelocityComponent> const&,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&
        players
);

MCAPI void setStanding(
    struct ActorDataFlagComponent&,
    class optional_ref<struct ActorDataHorseFlagComponent>,
    struct ActorDataDirtyFlagsComponent&,
    bool,
    struct HorseStandCounterComponent*,
    bool
);

MCAPI bool shouldApplyLava(class IConstBlockSource const& region, class EntityContext const& entity);

MCAPI bool
shouldApplyLava(class IConstBlockSource const&, struct AABBShapeComponent const&, struct SubBBsComponent const&, bool);
// NOLINTEND

}; // namespace ActorMobilityUtils
