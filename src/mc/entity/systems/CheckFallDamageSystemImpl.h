#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/components/FlagComponent.h"

namespace CheckFallDamageSystemImpl {
// NOLINTBEGIN
MCAPI void checkFallDamage(
    class ActorOwnerComponent&                                        actorComponent,
    struct MoveRequestComponent const&                                request,
    class Optional<struct OnGroundFlagComponent const>                onGround,
    class Optional<class FlagComponent<struct ActorTickedFlag> const> actorTickedComponent,
    bool                                                              forceRecheckLiquid
);
// NOLINTEND

}; // namespace CheckFallDamageSystemImpl
