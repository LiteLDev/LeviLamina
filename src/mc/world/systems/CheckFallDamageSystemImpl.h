#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace CheckFallDamageSystemImpl {
// NOLINTBEGIN
// symbol:
// ?checkFallDamage@CheckFallDamageSystemImpl@@YAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@AEAUCheckFallDamageRequestComponent@@V?$Optional@V?$FlagComponent@UActorTickedFlag@@@@@@_N@Z
MCAPI void checkFallDamage(
    class StrictEntityContext&,
    class ActorOwnerComponent&,
    struct CheckFallDamageRequestComponent&,
    class Optional<class FlagComponent<struct ActorTickedFlag>>,
    bool
);
// NOLINTEND

}; // namespace CheckFallDamageSystemImpl
