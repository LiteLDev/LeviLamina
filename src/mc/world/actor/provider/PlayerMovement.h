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
MCAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

#ifdef LL_PLAT_C
MCAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);
#endif

MCAPI ::Vec2 calculateMoveVector(
    ::MoveInputState const&         inputState,
    bool                            playerIsFlying,
    ::ActorDataFlagComponent const& playerData,
    bool                            playerIsInWater,
    ::SneakingComponent const*      sneakComponent
);

#ifdef LL_PLAT_C
MCAPI void clearInputState(::MoveInputComponent& input);

MCAPI float getBob(::EntityContext const& provider);

MCAPI float getBobPrev(::EntityContext const& provider);
#endif

MCAPI ::PlayerPositionModeComponent::PositionMode getPositionMode(::EntityContext const& provider);

MCAPI void initializePlayer(::EntityContext& provider);

MCAPI void resetBob(::EntityContext& provider);

MCAPI void setElytraFlightTimeTicks(::EntityContext& provider, ::Tick const& value);

MCAPI void setPositionMode(::EntityContext& provider, ::PlayerPositionModeComponent::PositionMode positionMode);

MCAPI bool shouldStopEmoting(
    ::Vec2                            rawMove,
    ::ActorDataFlagComponent&         actorDataFlag,
    ::ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    ::ClientInputLockComponent&       lockComponent,
    ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
);
// NOLINTEND

} // namespace PlayerMovement
