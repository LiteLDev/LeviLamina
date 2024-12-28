#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
// clang-format on

namespace PhysicsUtility {
// functions
// NOLINTBEGIN
MCAPI bool isAffectedByGravity(::ActorDataFlagComponent const& actorData);

MCAPI void setAffectedByGravity(
    ::ActorDataFlagComponent&       actorData,
    ::ActorDataDirtyFlagsComponent& dirtyFlags,
    bool                            affectedByGravity
);

MCAPI void setHasCollision(::Actor& owner, bool hasCollision);
// NOLINTEND

} // namespace PhysicsUtility
