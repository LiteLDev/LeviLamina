#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct BoatPaddleComponent;
struct ControlledByLocalInstanceComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace BoatRowTimeSyncSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tickBoatRowTimeWriteToBoatPaddleComponentSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::Exclude<::ControlledByLocalInstanceComponent>,
        ::BoatPaddleComponent,
        ::SynchedActorDataComponent const> view
);

MCNAPI void _tickBoatRowTimeWriteToSynchedActorDataComponentSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::BoatPaddleComponent const,
        ::SynchedActorDataComponent> view
);

MCNAPI ::TickingSystemWithInfo createSystem(bool isClientSide);
// NOLINTEND

} // namespace BoatRowTimeSyncSystem
