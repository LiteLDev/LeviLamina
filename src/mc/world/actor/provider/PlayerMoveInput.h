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
MCAPI void clearMovementState(::EntityContext& entity);

MCAPI bool isAutoJumpEnabled(::EntityContext const& entity);
#endif

MCAPI bool isDescending(::EntityContext const& entity);

#ifdef LL_PLAT_C
MCAPI bool isJumping(::EntityContext const& entity);

MCAPI bool isPlayerMoving(::EntityContext const& entity);
#endif

MCAPI bool isSneakDown(::EntityContext const& entity);

#ifdef LL_PLAT_C
MCAPI void setAutoJumpEnabled(::EntityContext& entity, bool autoJumpEnabled);
#endif
// NOLINTEND

} // namespace PlayerMoveInput
