#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"

namespace LendReplayStateSystem {
// NOLINTBEGIN
// symbol:
// ?_addReplayStateIfNoLongerRidingClientPredictedVehicle@LendReplayStateSystem@@YAXAEBVStrictEntityContext@@AEBUPassengerComponent@@AEBV?$function@$$A6A?AVReplayStateComponent@@XZ@std@@AEAV?$EntityModifier@VReplayStateComponent@@UReplayStateLenderFlagComponent@@@@AEAV?$ViewT@VStrictEntityContext@@$$CBUVehicleInputIntentComponent@@@@@Z
MCAPI void
_addReplayStateIfNoLongerRidingClientPredictedVehicle(class StrictEntityContext const&, struct PassengerComponent const&, std::function<class ReplayStateComponent()> const&, class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>&, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent const>&);

// symbol:
// ?_createAndAddReplayStateComponent@LendReplayStateSystem@@YAXAEBVStrictEntityContext@@AEBV?$function@$$A6A?AVReplayStateComponent@@XZ@std@@AEAV?$EntityModifier@VReplayStateComponent@@UReplayStateLenderFlagComponent@@@@@Z
MCAPI void
_createAndAddReplayStateComponent(class StrictEntityContext const&, std::function<class ReplayStateComponent()> const&, class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>&);

// symbol:
// ?_lendReplayStateToVehicle@LendReplayStateSystem@@YAXAEBVStrictEntityContext@@AEBUVehicleInputIntentComponent@@AEAV?$ViewT@VStrictEntityContext@@VReplayStateComponent@@@@AEBV?$function@$$A6A?AVReplayStateComponent@@XZ@std@@AEAV?$EntityModifier@VReplayStateComponent@@UReplayStateLenderFlagComponent@@@@@Z
MCAPI void
_lendReplayStateToVehicle(class StrictEntityContext const&, struct VehicleInputIntentComponent const&, class ViewT<class StrictEntityContext, class ReplayStateComponent>&, std::function<class ReplayStateComponent()> const&, class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>&);

// symbol: ?createAddBackToPlayerSystem@LendReplayStateSystem@@YA?AUTickingSystemWithInfo@@_N@Z
MCAPI struct TickingSystemWithInfo createAddBackToPlayerSystem(bool);

// symbol: ?createLendToVehicleSystem@LendReplayStateSystem@@YA?AUTickingSystemWithInfo@@_N@Z
MCAPI struct TickingSystemWithInfo createLendToVehicleSystem(bool);

// symbol: ?registerSystems@LendReplayStateSystem@@YAXAEAVEntitySystems@@_N@Z
MCAPI void registerSystems(class EntitySystems&, bool);
// NOLINTEND

}; // namespace LendReplayStateSystem
