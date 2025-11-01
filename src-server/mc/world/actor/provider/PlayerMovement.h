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
MCNAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

MCNAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);

MCNAPI void clearInputState(::MoveInputComponent& input);

MCNAPI void initializePlayer(::EntityContext& provider);
// NOLINTEND

}
