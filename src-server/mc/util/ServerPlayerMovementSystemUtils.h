#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct MovementInterpolatorComponent;
struct ServerPlayerCurrentMovementComponent;
// clang-format on

namespace ServerPlayerMovementSystemUtils {
// functions
// NOLINTBEGIN
MCNAPI void _tickServerPlayerMovementFinalSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::ServerPlayerCurrentMovementComponent const, ::ActorRotationComponent, ::MovementInterpolatorComponent> view);
// NOLINTEND

}
