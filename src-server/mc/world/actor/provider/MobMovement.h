#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MobMovement {
// functions
// NOLINTBEGIN
MCAPI void initializeMob(::EntityContext& provider);

MCAPI void setDiscardFriction(::EntityContext& provider, bool discardFriction);

MCAPI void setLocalMoveVelocity(::EntityContext& provider, ::std::optional<float> x, ::std::optional<float> y, ::std::optional<float> z);
// NOLINTEND

}
