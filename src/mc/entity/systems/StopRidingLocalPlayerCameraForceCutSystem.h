#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct LocalPlayerComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace StopRidingLocalPlayerCameraForceCutSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doTick(::ActorOwnerComponent& actorOwnerComponent);

#ifdef LL_PLAT_C
MCAPI void singleTick(
    ::StrictEntityContext const& localPlayer,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::LocalPlayerComponent, ::StopRidingRequestComponent>,
        ::ActorOwnerComponent> localPlayerStopRidingView
);
#endif
// NOLINTEND

} // namespace StopRidingLocalPlayerCameraForceCutSystem
