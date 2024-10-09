#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace MobMovementDrag {
// NOLINTBEGIN
MCAPI void forLiquidDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI void forNormalDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI void forWingFlapVerticalDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);

MCAPI void tickApplyWaterDrag(
    entt::type_list<struct Include<class FlagComponent<struct WaterTravelFlag>>>,
    class Optional<struct OnGroundFlagComponent const> onGroundFlag,
    class Optional<class WaterMovementComponent const> waterMovement,
    struct ActorDataFlagComponent const&               actorDataFlagComponent,
    struct SwimSpeedMultiplierComponent const&         swimSpeedMultiplierComponent,
    struct WaterWalkSpeedEnchantComponent const&       waterWalkSpeedEnchantComponent,
    struct StateVectorComponent&                       stateVectorComponent
);
// NOLINTEND

}; // namespace MobMovementDrag
