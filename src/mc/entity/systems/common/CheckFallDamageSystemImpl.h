#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace CheckFallDamageSystemImpl {
// NOLINTBEGIN
MCAPI void checkFallDamage(
    class ActorOwnerComponent&,
    struct MoveRequestComponent const&,
    class Optional<struct OnGroundFlagComponent const>,
    class Optional<class FlagComponent<struct ActorTickedFlag> const>,
    bool
);
// NOLINTEND

}; // namespace CheckFallDamageSystemImpl
