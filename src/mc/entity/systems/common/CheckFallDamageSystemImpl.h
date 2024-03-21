#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace CheckFallDamageSystemImpl {
// NOLINTBEGIN
// symbol:
// ?checkFallDamage@CheckFallDamageSystemImpl@@YAXAEAVActorOwnerComponent@@AEBUMoveRequestComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UActorTickedFlag@@@@@@_N@Z
MCAPI void checkFallDamage(
    class ActorOwnerComponent&,
    struct MoveRequestComponent const&,
    class Optional<class FlagComponent<struct OnGroundFlag> const>,
    class Optional<class FlagComponent<struct ActorTickedFlag> const>,
    bool
);
// NOLINTEND

}; // namespace CheckFallDamageSystemImpl
