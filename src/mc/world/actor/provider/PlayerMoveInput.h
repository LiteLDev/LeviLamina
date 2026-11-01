#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace PlayerMoveInput {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void clearMovementState(::EntityContext& entity);

MCNAPI bool isAutoJumpEnabled(::EntityContext const& entity);
#endif

MCNAPI bool isDescending(::EntityContext const& entity);

#ifdef LL_PLAT_C
MCAPI bool isJumping(::EntityContext const& entity);

MCNAPI bool isPlayerMoving(::EntityContext const& entity);
#endif

MCNAPI bool isSneakDown(::EntityContext const& entity);

#ifdef LL_PLAT_C
MCNAPI void setAutoJumpEnabled(::EntityContext& entity, bool autoJumpEnabled);
#endif
// NOLINTEND

} // namespace PlayerMoveInput
