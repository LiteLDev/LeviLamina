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
MCNAPI bool isAffectedByGravity(::ActorDataFlagComponent const& actorData);

MCNAPI void setAffectedByGravity(
    ::ActorDataFlagComponent&       actorData,
    ::ActorDataDirtyFlagsComponent& dirtyFlags,
    bool                            affectedByGravity
);

MCNAPI void setHasCollision(::Actor& owner, bool hasCollision);
// NOLINTEND

} // namespace PhysicsUtility
