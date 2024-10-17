#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace UpdateMovingFlagSystemImpl {
// NOLINTBEGIN
MCAPI void doTickMovingFlagSystem(
    entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>,
    class StrictEntityContext const&                context,
    struct StateVectorComponent const&              stateVectorComponent,
    class Optional<struct PassengerComponent const> passengerComponent,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ControlledByLocalInstanceFlag>>>
                                                                 vehicleView,
    class EntityModifier<class FlagComponent<struct MovingFlag>> modifier
);
// NOLINTEND

}; // namespace UpdateMovingFlagSystemImpl
