#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
struct ClientInputLockComponent;
struct MoveInputComponent;
struct MoveInputState;
// clang-format on

namespace PlayerMovement {
// functions
// NOLINTBEGIN
MCAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

MCAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);

MCAPI void clearInputState(::MoveInputComponent& input);

MCAPI void initializePlayer(::EntityContext& provider);
// NOLINTEND

} // namespace PlayerMovement
