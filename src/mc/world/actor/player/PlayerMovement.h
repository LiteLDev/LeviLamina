#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/enums/InputMode.h"

namespace PlayerMovement {
// NOLINTBEGIN
MCAPI void applyInputLocks(struct ClientInputLockComponent const&, struct MoveInputState&);

MCAPI class Vec2
calculateMoveVector(struct MoveInputState const&, bool, struct ActorDataFlagComponent const&, bool, struct SneakingComponent const*);

MCAPI void clearInputState(struct MoveInputComponent& input);

MCAPI struct ActorUniqueID getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const&, int);

MCAPI ::InputMode getInputMode(class EntityContext const& provider);

MCAPI ::PlayerPositionModeComponent::PositionMode getPositionMode(class EntityContext const& provider);

MCAPI void initializePlayer(class EntityContext& provider);

MCAPI bool isGamepadOrMotionController(struct PlayerInputModeComponent const&);

MCAPI bool isHoloRealityMode(struct PlayerInputModeComponent const&);

MCAPI void setElytraFlightTimeTicks(class EntityContext&, struct Tick const&);

MCAPI void setPositionMode(class EntityContext& provider, ::PlayerPositionModeComponent::PositionMode);

MCAPI bool
shouldStopEmoting(class Vec2, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, struct ClientInputLockComponent&, struct VanillaClientGameplayComponent&);
// NOLINTEND

}; // namespace PlayerMovement
