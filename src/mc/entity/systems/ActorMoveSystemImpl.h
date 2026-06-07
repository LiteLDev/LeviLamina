#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct DepenetrationComponent;
struct MoveRequestComponent;
struct MoveTowardsClosestSpaceFlagComponent;
// clang-format on

namespace ActorMoveSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void updateDepenetration(
    ::StrictEntityContext const&                             entity,
    ::MoveRequestComponent const&                            request,
    ::ActorDataFlagComponent const&                          actorData,
    ::DepenetrationComponent&                                depenetration,
    ::EntityModifier<::MoveTowardsClosestSpaceFlagComponent> modifier
);
// NOLINTEND

} // namespace ActorMoveSystemImpl
