#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

namespace PlayerPostTravelSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createGlidingGameEventSystem();

MCAPI void doServerPlayerPostTravel(
    struct ActorDataFlagComponent const&         synchedActorData,
    struct ElytraFlightTimeTicksComponent const& elytraFlightTimeTicks,
    struct StateVectorComponent const&           stateVector,
    class ActorOwnerComponent&                   actorOwner,
    struct CurrentTickComponent const&           currentTick
);

MCAPI void tickServerPlayerPostTravel(
    class ViewT<
        class StrictEntityContext,
        struct Include<
            class FlagComponent<struct ActorMovementTickNeededFlag>,
            class FlagComponent<struct ServerPlayerComponentFlag>>,
        struct ActorDataFlagComponent const,
        struct ElytraFlightTimeTicksComponent const,
        struct StateVectorComponent const,
        class ActorOwnerComponent>                          view,
    class OptionalGlobal<struct CurrentTickComponent const> currentTick
);
// NOLINTEND

}; // namespace PlayerPostTravelSystem
