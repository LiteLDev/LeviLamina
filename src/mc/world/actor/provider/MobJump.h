#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MobJump {
// functions
// NOLINTBEGIN
MCAPI int getNoJumpDelay(::EntityContext const& provider);

MCAPI void initializeMob(::EntityContext& provider);

MCAPI bool isJumping(::EntityContext const& provider);

MCAPI void setJumpPendingScale(::EntityContext& provider, float jumpPendingScale);

MCAPI void setJumpVelRedux(::EntityContext& provider, bool jumpStartVelRedux);

MCAPI void setJumping(::EntityContext& provider, bool jumping);

MCAPI void setNoJumpDelay(::EntityContext& provider, int noJumpDelay);
// NOLINTEND

} // namespace MobJump
