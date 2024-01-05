#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorLifecycle {
// NOLINTBEGIN
// symbol: ?clearIsFirstTick@ActorLifecycle@@YAXAEAVEntityContext@@@Z
MCAPI void clearIsFirstTick(class EntityContext& entity);

// symbol: ?initializeActor@ActorLifecycle@@YAXAEAVEntityContext@@@Z
MCAPI void initializeActor(class EntityContext& entity);

// symbol: ?isFirstTick@ActorLifecycle@@YA_NAEBVEntityContext@@@Z
MCAPI bool isFirstTick(class EntityContext const& entity);
// NOLINTEND

}; // namespace ActorLifecycle
