#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace MobMovementDrag {
// NOLINTBEGIN
// symbol: ?forLiquidDragSystems@MobMovementDrag@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forLiquidDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol: ?forNormalDragSystems@MobMovementDrag@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forNormalDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol:
// ?forWingFlapVerticalDragSystems@MobMovementDrag@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forWingFlapVerticalDragSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol:
// ?tickApplyWaterDrag@MobMovementDrag@@YAXU?$type_list@U?$Include@V?$FlagComponent@UWaterTravelFlag@@@@@@@entt@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBVWaterMovementComponent@@@@AEBUActorDataFlagComponent@@AEBUSwimSpeedMultiplierComponent@@AEBUWaterWalkSpeedEnchantComponent@@AEAUStateVectorComponent@@@Z
MCAPI void tickApplyWaterDrag(entt::type_list<struct Include<class FlagComponent<struct WaterTravelFlag>>>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class WaterMovementComponent const>, struct ActorDataFlagComponent const&, struct SwimSpeedMultiplierComponent const&, struct WaterWalkSpeedEnchantComponent const&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace MobMovementDrag
