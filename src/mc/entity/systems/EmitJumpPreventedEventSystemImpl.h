#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct TriggerJumpRequestComponent;
// clang-format on

namespace EmitJumpPreventedEventSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doEmitJumpPreventedEventSystem(
    ::StrictEntityContext&,
    ::TriggerJumpRequestComponent const& triggerJumpRequestComponent,
    ::ActorOwnerComponent&               actorOwnerComponent
);
// NOLINTEND

} // namespace EmitJumpPreventedEventSystemImpl
