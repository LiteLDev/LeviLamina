#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace DefaultMoveSystems {
// NOLINTBEGIN
// symbol:
// ?doDefaultMoveSystems@DefaultMoveSystems@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UCanStandOnSnowFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UHasLightweightFamilyFlag@@@@@@V?$Optional@$$CBUMoveInputComponent@@@@AEBUAABBShapeComponent@@AEBUActorRotationComponent@@AEBUActorDataFlagComponent@@AEAUFallDistanceComponent@@AEAUMobTravelComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void
doDefaultMoveSystems(class StrictEntityContext const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class Optional<struct MoveInputComponent const>, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct ActorDataFlagComponent const&, struct FallDistanceComponent&, struct MobTravelComponent&, struct StateVectorComponent&, class IConstBlockSource const&);

// symbol:
// ?doFlyingPlayerMoveSystems@DefaultMoveSystems@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEBUAABBShapeComponent@@AEBUActorRotationComponent@@AEAUMobTravelComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void
doFlyingPlayerMoveSystems(class StrictEntityContext const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct MobTravelComponent&, struct StateVectorComponent&, class IConstBlockSource const&);

// symbol: ?forSystems@DefaultMoveSystems@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol:
// ?horizontalMovement@DefaultMoveSystems@@YAXV?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEBUAABBShapeComponent@@AEBUActorRotationComponent@@AEAUMobTravelComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void
horizontalMovement(class Optional<class FlagComponent<struct OnGroundFlag> const>, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct MobTravelComponent&, struct StateVectorComponent&, class IConstBlockSource const&);

// symbol:
// ?verticalMovement@DefaultMoveSystems@@YAXV?$Optional@$$CBV?$FlagComponent@UCanStandOnSnowFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UHasLightweightFamilyFlag@@@@@@V?$Optional@$$CBUMoveInputComponent@@@@AEBUAABBShapeComponent@@AEBUActorDataFlagComponent@@AEAUFallDistanceComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void verticalMovement(class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>, class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>, class Optional<struct MoveInputComponent const>, struct AABBShapeComponent const&, struct ActorDataFlagComponent const&, struct FallDistanceComponent&, struct StateVectorComponent&, class IConstBlockSource const&);
// NOLINTEND

}; // namespace DefaultMoveSystems
