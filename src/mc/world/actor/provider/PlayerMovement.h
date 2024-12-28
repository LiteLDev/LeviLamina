#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec2;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorUniqueID;
struct ClientInputLockComponent;
struct MoveInputComponent;
struct MoveInputState;
struct PlayerInputModeComponent;
struct SneakingComponent;
struct StrictActorIDEntityContextPair;
struct Tick;
struct VanillaClientGameplayComponent;
// clang-format on

namespace PlayerMovement {
// functions
// NOLINTBEGIN
MCAPI void applyInputLocks(::ClientInputLockComponent const& lockComponent, ::MoveInputState& inputState);

MCAPI ::Vec2 calculateButtonMoveVector(::MoveInputState const& inputState);

MCAPI ::Vec2 calculateMoveVector(
    ::MoveInputState const&         inputState,
    bool                            playerIsFlying,
    ::ActorDataFlagComponent const& playerData,
    bool                            playerIsInWater,
    ::SneakingComponent const*      sneakComponent
);

MCAPI void clearInputState(::MoveInputComponent& input);

MCAPI ::ActorUniqueID
getControllingPassengerID(::std::vector<::StrictActorIDEntityContextPair> const& passengers, int controllingSeat);

MCAPI ::InputMode getInputMode(::EntityContext const& provider);

MCAPI ::PlayerPositionModeComponent::PositionMode getPositionMode(::EntityContext const& provider);

MCAPI void initializePlayer(::EntityContext& provider);

MCAPI bool isGamepadOrMotionController(::PlayerInputModeComponent const& playerInputModeComponent);

MCAPI bool isHoloRealityMode(::PlayerInputModeComponent const& playerInputModeComponent);

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
