#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace MobMovementClimb {
// NOLINTBEGIN
// symbol:
// ?canAutoClimbNow@MobMovementClimb@@YA_NAEBUSynchedActorDataComponent@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@_NAEBVIConstBlockSource@@@Z
MCAPI bool
canAutoClimbNow(struct SynchedActorDataComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent const&, bool, class IConstBlockSource const&);

// symbol: ?createAutoClimbSystem@MobMovementClimb@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createAutoClimbSystem();

// symbol: ?getAutoClimbBlockTestPos@MobMovementClimb@@YA?AVVec3@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@@Z
MCAPI class Vec3 getAutoClimbBlockTestPos(struct AABBShapeComponent const&, struct StateVectorComponent const&);

// symbol:
// ?getBlockAtFeet@MobMovementClimb@@YAAEBVBlockLegacy@@AEBUAABBShapeComponent@@AEBUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI class BlockLegacy const&
getBlockAtFeet(struct AABBShapeComponent const&, struct StateVectorComponent const&, class IConstBlockSource const&);

// symbol: ?isAutoClimbableBlock@MobMovementClimb@@YA_N_NAEBVBlockLegacy@@@Z
MCAPI bool isAutoClimbableBlock(bool, class BlockLegacy const&);

// symbol:
// ?tickAutoClimbingMob@MobMovementClimb@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBV?$FlagComponent@ULavaTravelFlag@@@@@@V?$Optional@$$CBVNavigationComponent@@@@V?$Optional@$$CBV?$FlagComponent@UCanStandOnSnowFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UHasLightweightFamilyFlag@@@@@@AEBUSynchedActorDataComponent@@AEBUAABBShapeComponent@@AEAUStateVectorComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UAutoClimbTravelFlag@@@@@@AEBVIConstBlockSource@@@Z
MCAPI void tickAutoClimbingMob(class StrictEntityContext const&, class Optional<class FlagComponent<struct LavaTravelFlag> const>, class Optional<class NavigationComponent const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, struct SynchedActorDataComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AutoClimbTravelFlag>>, class IConstBlockSource const&);
// NOLINTEND

}; // namespace MobMovementClimb
