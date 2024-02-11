#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace MobMovementClimb {
// NOLINTBEGIN
// symbol:
// ?applyAutoClimbing@MobMovementClimb@@YAXAEBVStrictEntityContext@@AEAUStateVectorComponent@@V?$EntityModifier@V?$FlagComponent@UAutoClimbTravelFlag@@@@@@@Z
MCAPI void
applyAutoClimbing(class StrictEntityContext const&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>);

// symbol:
// ?canAutoClimbNow@MobMovementClimb@@YA_NAEBUActorDataFlagComponent@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@_NAEBVIConstBlockSource@@@Z
MCAPI bool
canAutoClimbNow(struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent const&, bool, class IConstBlockSource const&);

// symbol: ?forAutoClimbSystems@MobMovementClimb@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forAutoClimbSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol: ?getAutoClimbBlockTestPos@MobMovementClimb@@YA?AVVec3@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@@Z
MCAPI class Vec3 getAutoClimbBlockTestPos(struct AABBShapeComponent const&, struct StateVectorComponent const&);

// symbol:
// ?getBlockAtFeet@MobMovementClimb@@YAAEBVBlockLegacy@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI class BlockLegacy const&
getBlockAtFeet(struct AABBShapeComponent const&, struct StateVectorComponent const&, class IConstBlockSource const&);

// symbol: ?isAutoClimbableBlock@MobMovementClimb@@YA_N_NAEBVBlockLegacy@@@Z
MCAPI bool isAutoClimbableBlock(bool, class BlockLegacy const&);

// symbol:
// ?tickAutoClimbingMob@MobMovementClimb@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBV?$FlagComponent@UCanStandOnSnowFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UHasLightweightFamilyFlag@@@@@@AEBUActorDataFlagComponent@@AEBUAABBShapeComponent@@AEAUStateVectorComponent@@V?$EntityModifier@V?$FlagComponent@UAutoClimbTravelFlag@@@@@@AEBVIConstBlockSource@@@Z
MCAPI void tickAutoClimbingMob(class StrictEntityContext const&, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>, class IConstBlockSource const&);

// symbol:
// ?tickAutoClimbingMobInLava@MobMovementClimb@@YAXAEBVStrictEntityContext@@AEBVNavigationComponent@@V?$Optional@$$CBV?$FlagComponent@UCanStandOnSnowFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UHasLightweightFamilyFlag@@@@@@AEBUActorDataFlagComponent@@AEBUAABBShapeComponent@@AEAUStateVectorComponent@@V?$EntityModifier@V?$FlagComponent@UAutoClimbTravelFlag@@@@@@AEBVIConstBlockSource@@@Z
MCAPI void tickAutoClimbingMobInLava(class StrictEntityContext const&, class NavigationComponent const&, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent&, class EntityModifier<class FlagComponent<struct AutoClimbTravelFlag>>, class IConstBlockSource const&);
// NOLINTEND

}; // namespace MobMovementClimb
