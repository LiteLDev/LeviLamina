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
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void doTick(::ActorOwnerComponent& actorOwnerComponent);

MCNAPI void tick(::ViewT<::StrictEntityContext, ::Include<::LocalPlayerComponent, ::StopRidingRequestComponent>, ::ActorOwnerComponent> localPlayerStopRidingView);
// NOLINTEND

}
