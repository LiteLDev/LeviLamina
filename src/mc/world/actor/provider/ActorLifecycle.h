#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorLifecycle {
// functions
// NOLINTBEGIN
MCAPI void clearIsFirstTick(::EntityContext& entity);

MCAPI void initializeActor(::EntityContext& entity);

MCAPI bool isFirstTick(::EntityContext const& entity);
// NOLINTEND

} // namespace ActorLifecycle
