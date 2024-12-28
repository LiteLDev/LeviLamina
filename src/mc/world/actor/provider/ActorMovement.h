#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorMovement {
// functions
// NOLINTBEGIN
MCAPI bool getHasTeleported(::EntityContext const& entity);

MCAPI float getPredictedWalkDist(::EntityContext const& entity, float alpha);

MCAPI void initializeActor(::EntityContext& entity);

MCAPI bool isImmobile(::EntityContext const& entity);

MCAPI void setHasTeleported(::EntityContext& entity, bool newValue);

MCAPI void setIsImmobile(::EntityContext& entity, bool newValue);

MCAPI void setIsJumping(::EntityContext& entity, bool newValue);
// NOLINTEND

} // namespace ActorMovement
