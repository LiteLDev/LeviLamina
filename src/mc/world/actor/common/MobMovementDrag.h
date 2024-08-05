#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace MobMovementDrag {
// NOLINTBEGIN
MCAPI void forLiquidDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI void forNormalDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI void forWingFlapVerticalDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

MCAPI void
tickApplyWaterDrag(entt::type_list<struct Include<class FlagComponent<struct WaterTravelFlag>>>, class Optional<struct OnGroundFlagComponent const>, class Optional<class WaterMovementComponent const>, struct ActorDataFlagComponent const&, struct SwimSpeedMultiplierComponent const&, struct WaterWalkSpeedEnchantComponent const&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace MobMovementDrag
