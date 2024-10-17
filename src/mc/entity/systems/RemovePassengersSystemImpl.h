#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace RemovePassengersSystemImpl {
// NOLINTBEGIN
MCAPI void removePassengersSystem(
    class StrictEntityContext const&  vehicleEntity,
    struct RemovePassengersComponent& removePassengersComponent,
    struct VehicleComponent&          vehicleComponent,
    class EntityModifier<
        struct VehicleComponent,
        class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>,
        class FlagComponent<struct PassengersChangedFlag>> modifier
);

MCAPI void singleTickRemovePassenger(
    class StrictEntityContext const& passengerEntity,
    struct PassengerComponent const& passengerComponent,
    class ViewT<class StrictEntityContext, struct RemovePassengersComponent const, struct VehicleComponent> vehicleView,
    class EntityModifier<
        struct VehicleComponent,
        class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>,
        class FlagComponent<struct PassengersChangedFlag>> modifier
);

MCAPI void tickRemovePassengersSystem(
    class ViewT<class StrictEntityContext, struct RemovePassengersComponent, struct VehicleComponent> view,
    class EntityModifier<
        struct VehicleComponent,
        class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>,
        class FlagComponent<struct PassengersChangedFlag>> modifier
);
// NOLINTEND

}; // namespace RemovePassengersSystemImpl
