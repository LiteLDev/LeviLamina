#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMoveInput {
// NOLINTBEGIN
// symbol: ?initializePlayer@PlayerMoveInput@@YAXAEAVEntityContext@@@Z
MCAPI void initializePlayer(class EntityContext& entity);

// symbol: ?isSneakDown@PlayerMoveInput@@YA_NAEBVEntityContext@@@Z
MCAPI bool isSneakDown(class EntityContext const& entity);
// NOLINTEND

}; // namespace PlayerMoveInput
