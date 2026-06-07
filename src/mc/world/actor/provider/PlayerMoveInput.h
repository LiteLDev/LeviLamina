#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct MoveInputComponent;
// clang-format on

namespace PlayerMoveInput {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI void clearInputState(::MoveInputComponent& input);

MCAPI void clearMovementState(::EntityContext& entity);

MCAPI void clearMovementState(::MoveInputComponent& input);
#endif

MCAPI void initializePlayer(::EntityContext& entity);

#ifdef LL_PLAT_C
MCAPI void initializeRemotePlayer(::EntityContext& entity);

MCAPI bool isAutoJumpEnabled(::EntityContext const& entity);
#endif

MCAPI bool isDescending(::EntityContext const& entity);

#ifdef LL_PLAT_C
MCAPI bool isInputBackward(::MoveInputComponent const& input);

MCAPI bool isInputForward(::MoveInputComponent const& input);

MCAPI bool isInputLeft(::MoveInputComponent const& input);

MCAPI bool isInputRight(::MoveInputComponent const& input);

MCAPI bool isJumping(::EntityContext const& entity);

MCAPI bool isPlayerMoving(::EntityContext const& entity);
#endif

MCAPI bool isSneakDown(::EntityContext const& entity);

#ifdef LL_PLAT_C
MCAPI bool isSprintDown(::MoveInputComponent const& input);

MCAPI void setAutoJumpEnabled(::EntityContext& entity, bool autoJumpEnabled);

MCAPI void setSneakDown(::MoveInputComponent& input, bool isDown);

MCAPI void setupPersistentControls(::MoveInputComponent& input, ::InputMode currentMode);
#endif
// NOLINTEND

} // namespace PlayerMoveInput
