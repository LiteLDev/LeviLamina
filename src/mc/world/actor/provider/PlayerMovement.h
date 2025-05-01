#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ClientInputLockComponent;
struct MoveInputState;
struct Tick;
struct VanillaClientGameplayComponent;
// clang-format on

namespace PlayerMovement {
// functions
// NOLINTBEGIN
MCNAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

MCNAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);

MCNAPI void initializePlayer(::EntityContext& provider);

MCNAPI void setElytraFlightTimeTicks(::EntityContext& provider, ::Tick const& value);

MCNAPI bool shouldStopEmoting(
    ::Vec2                            rawMove,
    ::ActorDataFlagComponent&         actorDataFlag,
    ::ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    ::ClientInputLockComponent&       lockComponent,
    ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
);
// NOLINTEND

} // namespace PlayerMovement
