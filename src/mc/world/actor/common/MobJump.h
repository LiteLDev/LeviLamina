#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobJump {
// NOLINTBEGIN
// symbol: ?getNoJumpDelay@MobJump@@YAHAEBVEntityContext@@@Z
MCAPI int getNoJumpDelay(class EntityContext const& provider);

// symbol: ?initializeMob@MobJump@@YAXAEAVEntityContext@@@Z
MCAPI void initializeMob(class EntityContext& provider);

// symbol: ?isJumping@MobJump@@YA_NAEBVEntityContext@@@Z
MCAPI bool isJumping(class EntityContext const&);

// symbol: ?setJumpPendingScale@MobJump@@YAXAEAVEntityContext@@M@Z
MCAPI void setJumpPendingScale(class EntityContext& provider, float);

// symbol: ?setJumpStartPosition@MobJump@@YAXAEAVEntityContext@@AEBVVec3@@@Z
MCAPI void setJumpStartPosition(class EntityContext& provider, class Vec3 const& position);

// symbol: ?setJumpVelRedux@MobJump@@YAXAEAVEntityContext@@_N@Z
MCAPI void setJumpVelRedux(class EntityContext& provider, bool);

// symbol: ?setJumping@MobJump@@YAXAEAVEntityContext@@_N@Z
MCAPI void setJumping(class EntityContext&, bool);

// symbol: ?setNoJumpDelay@MobJump@@YAXAEAVEntityContext@@H@Z
MCAPI void setNoJumpDelay(class EntityContext& provider, int);
// NOLINTEND

}; // namespace MobJump
