#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorTickedComponent;
struct MoveRequestComponent;
struct OnGroundFlagComponent;
// clang-format on

namespace CheckFallDamageSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void checkFallDamage(
    ::ActorOwnerComponent&                    actorComponent,
    ::MoveRequestComponent const&             request,
    ::Optional<::OnGroundFlagComponent const> onGround,
    ::Optional<::ActorTickedComponent const>  actorTickedComponent,
    bool                                      forceRecheckLiquid
);

MCNAPI void tickCheckFallDamageSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::ActorOwnerComponent,
        ::MoveRequestComponent const,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::ActorTickedComponent const>> view
);
// NOLINTEND

} // namespace CheckFallDamageSystemImpl
