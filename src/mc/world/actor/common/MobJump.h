#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobJump {
// NOLINTBEGIN
MCAPI int getNoJumpDelay(class EntityContext const& provider);

MCAPI void initializeMob(class EntityContext& provider);

MCAPI bool isJumping(class EntityContext const&);

MCAPI void setJumpPendingScale(class EntityContext& provider, float);

MCAPI void setJumpStartPosition(class EntityContext& provider, class Vec3 const& position);

MCAPI void setJumpVelRedux(class EntityContext& provider, bool);

MCAPI void setJumping(class EntityContext&, bool);

MCAPI void setNoJumpDelay(class EntityContext& provider, int);
// NOLINTEND

}; // namespace MobJump
