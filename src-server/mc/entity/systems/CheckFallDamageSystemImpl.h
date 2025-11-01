#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct ActorTickedComponent;
struct MoveRequestComponent;
struct OnGroundFlagComponent;
// clang-format on

namespace CheckFallDamageSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void checkFallDamage(::ActorOwnerComponent& actorComponent, ::MoveRequestComponent const& request, ::Optional<::OnGroundFlagComponent const> onGround, ::Optional<::ActorTickedComponent const> actorTickedComponent, bool forceRecheckLiquid);
// NOLINTEND

}
