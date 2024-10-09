#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobJump {
// NOLINTBEGIN
MCAPI int getNoJumpDelay(class EntityContext const& provider);

MCAPI void initializeMob(class EntityContext& provider);

MCAPI bool isJumping(class EntityContext const& provider);

MCAPI void setJumpPendingScale(class EntityContext& provider, float jumpPendingScale);

MCAPI void setJumpStartPosition(class EntityContext& provider, class Vec3 const& position);

MCAPI void setJumpVelRedux(class EntityContext& provider, bool jumpStartVelRedux);

MCAPI void setJumping(class EntityContext& provider, bool jumping);

MCAPI void setNoJumpDelay(class EntityContext& provider, int noJumpDelay);
// NOLINTEND

}; // namespace MobJump
