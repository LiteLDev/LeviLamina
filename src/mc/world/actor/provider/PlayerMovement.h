#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ClientInputLockComponent;
struct MoveInputComponent;
struct MoveInputState;
struct Tick;
struct VanillaClientGameplayComponent;
// clang-format on

namespace PlayerMovement {
// functions
// NOLINTBEGIN
MCAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

MCAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);

MCAPI void clearInputState(::MoveInputComponent& input);

#ifdef LL_PLAT_C
MCAPI ::InputMode getInputMode(::EntityContext const& provider);
#endif

MCAPI void initializePlayer(::EntityContext& provider);

MCAPI void setElytraFlightTimeTicks(::EntityContext& provider, ::Tick const& value);

#ifdef LL_PLAT_C
MCAPI bool shouldStopEmoting(
    ::Vec2                            rawMove,
    ::ActorDataFlagComponent&         actorDataFlag,
    ::ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    ::ClientInputLockComponent&       lockComponent,
    ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
);
#endif
// NOLINTEND

} // namespace PlayerMovement
