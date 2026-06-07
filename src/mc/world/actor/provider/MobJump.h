#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MobJump {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float getJumpRidingScale(::EntityContext const& provider);
#endif

MCAPI int getNoJumpDelay(::EntityContext const& provider);

#ifdef LL_PLAT_C
MCAPI void initializeLocalPlayer(::EntityContext& provider);
#endif

MCAPI void initializeMob(::EntityContext& provider);

MCAPI bool isJumping(::EntityContext const& provider);

MCAPI void setJumpPendingScale(::EntityContext& provider, float jumpPendingScale);

#ifdef LL_PLAT_C
MCAPI void setJumpRidingScale(::EntityContext& provider, float jumpRidingScale);
#endif

MCAPI void setJumpVelRedux(::EntityContext& provider, bool jumpStartVelRedux);

MCFOLD void setJumping(::EntityContext& provider, bool jumping);

MCAPI void setNoJumpDelay(::EntityContext& provider, int noJumpDelay);
// NOLINTEND

} // namespace MobJump
