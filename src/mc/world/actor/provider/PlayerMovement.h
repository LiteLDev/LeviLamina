#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"

namespace PlayerMovement {
// NOLINTBEGIN
MCAPI void applyInputLocks(struct ClientInputLockComponent const& lockComponent, struct MoveInputState& inputState);

MCAPI class Vec2 calculateMoveVector(
    struct MoveInputState const&         inputState,
    bool                                 playerIsFlying,
    struct ActorDataFlagComponent const& playerData,
    bool                                 playerIsInWater,
    struct SneakingComponent const*      sneakComponent
);

MCAPI void clearInputState(struct MoveInputComponent& input);

MCAPI struct ActorUniqueID
getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const& passengers, int controllingSeat);

MCAPI ::InputMode getInputMode(class EntityContext const& provider);

MCAPI ::PlayerPositionModeComponent::PositionMode getPositionMode(class EntityContext const& provider);

MCAPI void initializePlayer(class EntityContext& provider);

MCAPI bool isGamepadOrMotionController(struct PlayerInputModeComponent const& playerInputModeComponent);

MCAPI bool isHoloRealityMode(struct PlayerInputModeComponent const& playerInputModeComponent);

MCAPI void setElytraFlightTimeTicks(class EntityContext& provider, struct Tick const& value);

MCAPI void setPositionMode(class EntityContext& provider, ::PlayerPositionModeComponent::PositionMode positionMode);

MCAPI bool shouldStopEmoting(
    class Vec2                             rawMove,
    struct ActorDataFlagComponent&         actorDataFlag,
    struct ActorDataDirtyFlagsComponent&   actorDataDirtyFlags,
    struct ClientInputLockComponent&       lockComponent,
    struct VanillaClientGameplayComponent& vanillaClientGameplayComponent
);
// NOLINTEND

}; // namespace PlayerMovement
