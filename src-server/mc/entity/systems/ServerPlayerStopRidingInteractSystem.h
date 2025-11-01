#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ActorRuntimeID;
struct ServerPlayerMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerPlayerStopRidingInteractSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void makePassengerStopRiding(
    ::ActorOwnerComponent&           actorOwnerComponent,
    ::ServerPlayerMovementComponent* serverPlayerMovementComponent,
    ::ActorRuntimeID const&          vehicleID
);
// NOLINTEND

} // namespace ServerPlayerStopRidingInteractSystem
