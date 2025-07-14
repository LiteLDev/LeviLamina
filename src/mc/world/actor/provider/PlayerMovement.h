#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
struct ClientInputLockComponent;
struct MoveInputState;
struct Tick;
// clang-format on

namespace PlayerMovement {
// functions
// NOLINTBEGIN
MCNAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

MCNAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);

MCNAPI void initializePlayer(::EntityContext& provider);

MCNAPI void setElytraFlightTimeTicks(::EntityContext& provider, ::Tick const& value);
// NOLINTEND

} // namespace PlayerMovement
