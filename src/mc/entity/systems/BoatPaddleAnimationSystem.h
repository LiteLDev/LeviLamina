#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace BoatPaddleAnimationSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void sendAnimationPackets(
    entt::type_list<
        struct Include<
            class FlagComponent<struct ActorMovementTickNeededFlag>,
            class FlagComponent<struct BoatFlag>,
            class FlagComponent<struct ShouldBeSimulatedFlag>>,
        struct Exclude<class FlagComponent<struct ActorRemovedFlag>>>,
    class ActorOwnerComponent const&                                               actorOwnerComponent,
    struct BoatPaddleComponent const&                                              boatPaddleComponent,
    class Optional<struct VehicleInputIntentComponent const> const&                vehicleInputIntentComponent,
    class ViewT<class StrictEntityContext, struct RuntimeIDComponent const> const& idView
);
// NOLINTEND

}; // namespace BoatPaddleAnimationSystem
