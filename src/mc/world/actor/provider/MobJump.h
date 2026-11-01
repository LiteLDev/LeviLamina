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
MCNAPI float getJumpRidingScale(::EntityContext const& provider);
#endif

MCNAPI int getNoJumpDelay(::EntityContext const& provider);

MCNAPI void initializeMob(::EntityContext& provider);

MCNAPI void setJumpPendingScale(::EntityContext& provider, float jumpPendingScale);

#ifdef LL_PLAT_C
MCNAPI void setJumpRidingScale(::EntityContext& provider, float jumpRidingScale);
#endif

MCNAPI void setJumpVelRedux(::EntityContext& provider, bool jumpStartVelRedux);

MCNAPI void setNoJumpDelay(::EntityContext& provider, int noJumpDelay);
// NOLINTEND

} // namespace MobJump
