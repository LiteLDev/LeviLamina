#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ClientInputLockComponent;
struct MoveInputComponent;
struct MoveInputState;
struct SneakingComponent;
struct Tick;
struct VanillaClientGameplayComponent;
// clang-format on

namespace PlayerMovement {
// functions
// NOLINTBEGIN
MCNAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

#ifdef LL_PLAT_C
MCNAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);
#endif

MCAPI ::Vec2 calculateMoveVector(
    ::MoveInputState const&         inputState,
    bool                            playerIsFlying,
    ::ActorDataFlagComponent const& playerData,
    bool                            playerIsInWater,
    ::SneakingComponent const*      sneakComponent
);

#ifdef LL_PLAT_C
MCNAPI void clearInputState(::MoveInputComponent& input);

MCNAPI float getBob(::EntityContext const& provider);

MCNAPI float getBobPrev(::EntityContext const& provider);
#endif

MCNAPI ::PlayerPositionModeComponent::PositionMode getPositionMode(::EntityContext const& provider);

MCNAPI void initializePlayer(::EntityContext& provider);

MCNAPI void resetBob(::EntityContext& provider);

MCNAPI void setElytraFlightTimeTicks(::EntityContext& provider, ::Tick const& value);

MCNAPI void setPositionMode(::EntityContext& provider, ::PlayerPositionModeComponent::PositionMode positionMode);

MCNAPI bool shouldStopEmoting(
    ::Vec2                            rawMove,
    ::ActorDataFlagComponent&         actorDataFlag,
    ::ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    ::ClientInputLockComponent&       lockComponent,
    ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
);
// NOLINTEND

} // namespace PlayerMovement
