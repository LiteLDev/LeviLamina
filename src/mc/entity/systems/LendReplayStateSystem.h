#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace LendReplayStateSystem {
// NOLINTBEGIN
MCAPI void _addReplayStateIfNoLongerRidingClientPredictedVehicle(
    class StrictEntityContext const&                                                         player,
    struct PassengerComponent const&                                                         passengerComponent,
    std::function<class ReplayStateComponent()> const&                                       createReplayState,
    class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>& mod,
    class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent const>&        vehicleView
);

MCAPI void _createAndAddReplayStateComponent(
    class StrictEntityContext const&                                                         entity,
    std::function<class ReplayStateComponent()> const&                                       createReplayState,
    class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>& mod
);

MCAPI void _lendReplayStateToVehicle(
    class StrictEntityContext const&                                    vehicle,
    struct VehicleInputIntentComponent const&                           vehicleInputIntentComponent,
    class ViewT<class StrictEntityContext, class ReplayStateComponent>& passengerView,
    std::function<class ReplayStateComponent()> const&                  createReplayState,
    class EntityModifier<class ReplayStateComponent, struct ReplayStateLenderFlagComponent>& mod
);

MCAPI struct TickingSystemWithInfo createAddBackToPlayerSystem(bool isClientSide);

MCAPI struct TickingSystemWithInfo createLendToVehicleSystem(bool isClientSide);

MCAPI void registerSystems(class EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

}; // namespace LendReplayStateSystem
