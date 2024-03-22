#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace BuoyancySystem {
// NOLINTBEGIN
// symbol:
// ?checkAndAddFloatRequest@BuoyancySystem@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAVBuoyancyComponent@@AEAV?$EntityModifier@UBuoyancyFloatRequestComponent@@@@AEBVIConstBlockSource@@@Z
MCAPI void
checkAndAddFloatRequest(class StrictEntityContext const&, struct StateVectorComponent const&, class BuoyancyComponent&, class EntityModifier<struct BuoyancyFloatRequestComponent>&, class IConstBlockSource const&);

// symbol:
// ?increaseBuoyancyTimerSystem@BuoyancySystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UShouldBeSimulatedFlag@@@@@@@entt@@AEBURandomReferenceComponent@@AEBUStateVectorComponent@@AEAVBuoyancyComponent@@AEBV?$ViewT@VStrictEntityContext@@URandomComponent@@@@@Z
MCAPI void increaseBuoyancyTimerSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct ShouldBeSimulatedFlag>>>, struct RandomReferenceComponent const&, struct StateVectorComponent const&, class BuoyancyComponent&, class ViewT<class StrictEntityContext, struct RandomComponent> const&);

// symbol: ?registerSystems@BuoyancySystem@@YAXAEAVEntitySystems@@_N@Z
MCAPI void registerSystems(class EntitySystems&, bool);
// NOLINTEND

}; // namespace BuoyancySystem
