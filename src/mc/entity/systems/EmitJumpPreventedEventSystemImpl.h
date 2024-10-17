#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EmitJumpPreventedEventSystemImpl {
// NOLINTBEGIN
MCAPI void doEmitJumpPreventedEventSystem(
    class StrictEntityContext&,
    struct TriggerJumpRequestComponent const& triggerJumpRequestComponent,
    class ActorOwnerComponent&                actorOwnerComponent
);
// NOLINTEND

}; // namespace EmitJumpPreventedEventSystemImpl
