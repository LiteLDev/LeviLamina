#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct CurrentTickComponent;
struct ElytraFlightTimeTicksComponent;
struct ServerPlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerPostTravelSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createGlidingGameEventSystem();

MCAPI void doServerPlayerPostTravel(
    ::ActorDataFlagComponent const&         synchedActorData,
    ::ElytraFlightTimeTicksComponent const& elytraFlightTimeTicks,
    ::StateVectorComponent const&           stateVector,
    ::ActorOwnerComponent&                  actorOwner,
    ::CurrentTickComponent const&           currentTick
);

MCAPI void tickServerPlayerPostTravel(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::ServerPlayerComponent>,
        ::ActorDataFlagComponent const,
        ::ElytraFlightTimeTicksComponent const,
        ::StateVectorComponent const,
        ::ActorOwnerComponent>                     view,
    ::OptionalGlobal<::CurrentTickComponent const> currentTick
);
// NOLINTEND

} // namespace PlayerPostTravelSystem
