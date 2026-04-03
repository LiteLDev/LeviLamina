#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct GlidingCollisionDamageComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace GlidingMoveFinalizeSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tickCollisionDamageHurt(
    ::StrictEntityContext const&                        entity,
    ::ActorOwnerComponent&                              actorOwnerComponent,
    ::GlidingCollisionDamageComponent const&            glidingCollisionDamageComponent,
    ::EntityModifier<::GlidingCollisionDamageComponent> modifier
);

MCNAPI ::TickingSystemWithInfo createCollisionDamageCalculateSystem();
// NOLINTEND

} // namespace GlidingMoveFinalizeSystem
