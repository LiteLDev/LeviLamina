#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorMovement {
// NOLINTBEGIN
MCAPI bool getHasTeleported(class EntityContext const& entity);

MCAPI float getPredictedWalkDist(class EntityContext const&, float);

MCAPI void initializeActor(class EntityContext& entity);

MCAPI bool isImmobile(class EntityContext const& entity);

MCAPI void setHasTeleported(class EntityContext& entity, bool newValue);

MCAPI void setIsImmobile(class EntityContext& entity, bool newValue);

MCAPI void setIsJumping(class EntityContext&, bool);
// NOLINTEND

}; // namespace ActorMovement
