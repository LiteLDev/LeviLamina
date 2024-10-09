#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/world/level/material/MaterialType.h"

namespace ActorMobilityUtils {
// NOLINTBEGIN
MCAPI bool canActivateElytra(
    struct MoveInputComponent const&             moveInputComponent,
    struct VanillaClientGameplayComponent const& vanillaClientGameplayComponent,
    bool                                         isGliding,
    bool                                         isFlying
);

MCAPI bool canDash(struct ActorDataFlagComponent const& actorData);

MCAPI bool canJump(
    struct ActorDataFlagComponent const&    actorData,
    class IConstBlockSource const&          region,
    struct StateVectorComponent const&      stateVector,
    struct AABBShapeComponent const&        aabbShape,
    class GetCollisionShapeInterface const& collisionShape
);

MCAPI bool canPowerJump(struct ActorDataFlagComponent const& actorData, bool hasJumpStrength, bool isMob);

MCAPI void endJump(
    class StrictEntityContext const&       context,
    struct StateVectorComponent const&     stateVectorComponent,
    struct ActorDataJumpDurationComponent& actorDataJumpDurationComponent,
    struct ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    struct MobJumpComponent&               mobJumpComponent,
    struct VehicleComponent const*         vehicleComponent,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ParrotFlag>>,
        struct PassengerComponent const> parrotPassengers,
    class EntityModifier<
        class FlagComponent<struct ExitFromPassengerFlag>,
        class FlagComponent<struct StopRidingRequestFlag>,
        class FlagComponent<struct MobIsJumpingFlag>>& modifier
);

MCAPI float getBrightness(
    class StrictEntityContext const&                                                              context,
    float                                                                                         alpha,
    class IConstBlockSource const&                                                                region,
    struct AABBShapeComponent const&                                                              aabbShapeComponent,
    struct OffsetsComponent const&                                                                offsetsComponent,
    struct StateVectorComponent const&                                                            stateVectorComponent,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BlazeFlag>>> blazeView,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct LavaSlimeFlag>>> lavaSlimeView
);

MCAPI float getJumpEffectAmplifierValue(std::vector<class MobEffectInstance> const& mobEffects);

MCAPI float getJumpEffectAmplifierValue(struct MobEffectsComponent const& mobEffectsComponent);

MCAPI float getJumpPower(class JumpControlComponent const* jumpControlComponent, bool isSquid);

MCAPI class Vec3 getPosFromAABB(class AABB const& aabb, float heightOffset);

MCAPI float getSpeed(
    class StrictEntityContext const& entity,
    class ViewT<
        class StrictEntityContext,
        struct MovementAttributesComponent const,
        struct MovementSpeedComponent const> const& speedData,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&
        players
);

MCAPI bool isGliding(struct ActorDataFlagComponent const& actorData);

MCAPI bool isImmobile(
    class StrictEntityContext const& context,
    class ViewT<
        class StrictEntityContext,
        struct ActorDataFlagComponent const,
        class Optional<class FlagComponent<struct ActorIsImmobileFlag> const>>* actorView,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct MobFlag>>,
        struct MovementAttributesComponent const,
        class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag> const>>* mobView,
    class ViewT<
        class StrictEntityContext,
        struct ActorDataFlagComponent const,
        struct Include<struct OnGroundFlagComponent, class FlagComponent<struct HorseFlag>>,
        struct Exclude<
            class FlagComponent<struct MobAllowStandSlidingFlag>,
            class FlagComponent<struct MobIsJumpingFlag>>>*                                        horseView,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>>* onlyHorseView,
    class ViewT<
        class StrictEntityContext,
        class FlagComponent<struct PlayerIsSleepingFlag> const,
        class FlagComponent<struct PlayerComponentFlag> const>* playerView
);

MCAPI bool isInLava(
    class IConstBlockSource const&   region,
    struct AABBShapeComponent const& aabb,
    struct SubBBsComponent const&    subBBs
);

MCAPI bool isOnFire(
    struct ActorDataFlagComponent const&                 actorDataFlagComponent,
    struct OnFireComponent const*                        onFireComponent,
    class FlagComponent<struct LavaSlimeFlag> const*     lavaSlimeFlagComponent,
    class FlagComponent<struct ShulkerBulletFlag> const* shulkerBulletFlagComponent,
    class FlagComponent<struct WitherSkullFlag> const*   witherSkullFlagComponent,
    class FlagComponent<struct BlazeFlag> const*         blazeFlagComponent
);

MCAPI bool isSprinting(struct ActorDataFlagComponent const& actorData);

MCAPI bool isSwimming(struct ActorDataFlagComponent const& actorData);

MCAPI bool isUnderLiquid(
    class Vec3 const&              actorPos,
    class Vec3 const&              actorHeadPos,
    class IConstBlockSource const& region,
    ::MaterialType                 blockType
);

MCAPI void moveBBs(class Vec3 const& pos, struct SubBBsComponent& subBBs);

MCAPI void moveBBs(class Vec3 const& pos, struct AABBShapeComponent& aabb, struct SubBBsComponent& subBBs);

MCAPI bool onHoverableBlock(class IConstBlockSource const& region, class Vec3 const& pos, class AABB const& aabb);

MCAPI void setSpeed(
    class StrictEntityContext const& entity,
    float                            speed,
    class ViewT<class StrictEntityContext, struct MovementSpeedComponent, struct LocalMoveVelocityComponent> const&
        speedData,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> const&
        players
);

MCAPI void setStanding(
    struct ActorDataFlagComponent&                         synchedActorData,
    class optional_ref<struct ActorDataHorseFlagComponent> actorDataHorseFlag,
    struct ActorDataDirtyFlagsComponent&                   actorDataDirtyFlags,
    bool                                                   value,
    struct HorseStandCounterComponent*                     horseStandCounterComponent,
    bool                                                   isServer
);

MCAPI bool shouldApplyLava(class IConstBlockSource const& region, class EntityContext const& entity);

MCAPI bool shouldApplyLava(
    class IConstBlockSource const&   region,
    struct AABBShapeComponent const& aabb,
    struct SubBBsComponent const&    subBBs,
    bool                             isImmuneToLava
);
// NOLINTEND

}; // namespace ActorMobilityUtils
