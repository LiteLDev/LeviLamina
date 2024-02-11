#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/enums/InputMode.h"

namespace PlayerMovement {
// NOLINTBEGIN
// symbol: ?applyInputLocks@PlayerMovement@@YAXAEBUClientInputLockComponent@@AEAUMoveInputState@@@Z
MCAPI void applyInputLocks(struct ClientInputLockComponent const&, struct MoveInputState&);

// symbol:
// ?calculateMoveVector@PlayerMovement@@YA?AVVec2@@AEBUMoveInputState@@_NAEBUActorDataFlagComponent@@1PEBUSneakingComponent@@@Z
MCAPI class Vec2
calculateMoveVector(struct MoveInputState const&, bool, struct ActorDataFlagComponent const&, bool, struct SneakingComponent const*);

// symbol: ?clearInputState@PlayerMovement@@YAXAEAUMoveInputComponent@@@Z
MCAPI void clearInputState(struct MoveInputComponent& input);

// symbol:
// ?getControllingPassengerID@PlayerMovement@@YA?AUActorUniqueID@@AEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@H@Z
MCAPI struct ActorUniqueID getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const&, int);

// symbol: ?getInputMode@PlayerMovement@@YA?AW4InputMode@@AEBVEntityContext@@@Z
MCAPI ::InputMode getInputMode(class EntityContext const& provider);

// symbol: ?getPositionMode@PlayerMovement@@YA?AW4PositionMode@PlayerPositionModeComponent@@AEBVEntityContext@@@Z
MCAPI ::PlayerPositionModeComponent::PositionMode getPositionMode(class EntityContext const& provider);

// symbol: ?initializePlayer@PlayerMovement@@YAXAEAVEntityContext@@@Z
MCAPI void initializePlayer(class EntityContext& provider);

// symbol: ?isGamepadOrMotionController@PlayerMovement@@YA_NAEBUPlayerInputModeComponent@@@Z
MCAPI bool isGamepadOrMotionController(struct PlayerInputModeComponent const&);

// symbol: ?isHoloRealityMode@PlayerMovement@@YA_NAEBUPlayerInputModeComponent@@@Z
MCAPI bool isHoloRealityMode(struct PlayerInputModeComponent const&);

// symbol: ?setElytraFlightTimeTicks@PlayerMovement@@YAXAEAVEntityContext@@AEBUTick@@@Z
MCAPI void setElytraFlightTimeTicks(class EntityContext&, struct Tick const&);

// symbol: ?setPositionMode@PlayerMovement@@YAXAEAVEntityContext@@W4PositionMode@PlayerPositionModeComponent@@@Z
MCAPI void setPositionMode(class EntityContext& provider, ::PlayerPositionModeComponent::PositionMode);

// symbol:
// ?shouldStopEmoting@PlayerMovement@@YA_NVVec2@@AEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@AEAUClientInputLockComponent@@AEAUVanillaClientGameplayComponent@@@Z
MCAPI bool
shouldStopEmoting(class Vec2, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, struct ClientInputLockComponent&, struct VanillaClientGameplayComponent&);
// NOLINTEND

}; // namespace PlayerMovement
