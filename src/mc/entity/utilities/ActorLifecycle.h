#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorLifecycle {
// NOLINTBEGIN
MCAPI void clearIsFirstTick(class EntityContext& entity);

MCAPI void initializeActor(class EntityContext& entity);

MCAPI bool isFirstTick(class EntityContext const& entity);
// NOLINTEND

}; // namespace ActorLifecycle
