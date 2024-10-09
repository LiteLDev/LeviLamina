#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace SetVehicleInputIntentSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void doSetVehicleInputIntent(
    entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>,
    class StrictEntityContext const&                     context,
    struct VehicleComponent const&                       vehicle,
    struct ActorDataFlagComponent const&                 actorDataFlag,
    struct ActorDataControllingSeatIndexComponent const& controllingSeatIndex,
    class ViewT<
        class StrictEntityContext,
        struct Include<struct PassengerComponent, class FlagComponent<struct MobFlag>>> const& passengerView,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        class FlagComponent<struct ShouldBeSimulatedFlag>> const& playerView,
    class EntityModifier<struct VehicleInputIntentComponent>      modifier
);
// NOLINTEND

}; // namespace SetVehicleInputIntentSystem
