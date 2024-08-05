#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"

namespace LendReplayStateSystem {
// NOLINTBEGIN
MCAPI void
_addReplayStateIfNoLongerRidingClientPredictedVehicle(class StrictEntityContext const&, struct PassengerComponent const&, std::function<class ReplayStateComponent()> const&, class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>&, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent const>&);

MCAPI void
_createAndAddReplayStateComponent(class StrictEntityContext const&, std::function<class ReplayStateComponent()> const&, class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>&);

MCAPI void
_lendReplayStateToVehicle(class StrictEntityContext const&, struct VehicleInputIntentComponent const&, class ViewT<class StrictEntityContext, class ReplayStateComponent>&, std::function<class ReplayStateComponent()> const&, class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>&);

MCAPI struct TickingSystemWithInfo createAddBackToPlayerSystem(bool);

MCAPI struct TickingSystemWithInfo createLendToVehicleSystem(bool);

MCAPI void registerSystems(class EntitySystems&, bool);
// NOLINTEND

}; // namespace LendReplayStateSystem
