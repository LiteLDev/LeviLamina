#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMoveInput {
// NOLINTBEGIN
MCAPI void initializePlayer(class EntityContext& entity);

MCAPI bool isSneakDown(class EntityContext const& entity);
// NOLINTEND

}; // namespace PlayerMoveInput
