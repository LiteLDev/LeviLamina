#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"

namespace PlayerMovement {
/**
 * @symbol ?applyInputLocks\@PlayerMovement\@\@YAXAEBUClientInputLockComponent\@\@AEAUMoveInputState\@\@\@Z
 */
MCAPI void applyInputLocks(struct ClientInputLockComponent const&, struct MoveInputState&); // NOLINT
/**
 * @symbol
 * ?calculateMoveVector\@PlayerMovement\@\@YA?AVVec2\@\@AEBUMoveInputState\@\@AEBVLayeredAbilities\@\@AEBVSynchedActorData\@\@_NPEBUSneakingComponent\@\@\@Z
 */
MCAPI class Vec2
calculateMoveVector(struct MoveInputState const&, class LayeredAbilities const&, class SynchedActorData const&, bool, struct SneakingComponent const*); // NOLINT
/**
 * @symbol ?calculateMoveVector\@PlayerMovement\@\@YA?AVVec2\@\@AEBUMoveInputState\@\@AEAUIPlayerMovementProxy\@\@\@Z
 */
MCAPI class Vec2 calculateMoveVector(struct MoveInputState const&, struct IPlayerMovementProxy&); // NOLINT
/**
 * @symbol ?clearInputState\@PlayerMovement\@\@YAXAEAUMoveInputComponent\@\@\@Z
 */
MCAPI void clearInputState(struct MoveInputComponent&); // NOLINT
/**
 * @symbol
 * ?getControllingPassengerID\@PlayerMovement\@\@YA?AUActorUniqueID\@\@AEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@H\@Z
 */
MCAPI struct ActorUniqueID
getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const&, int); // NOLINT
/**
 * @symbol ?getInputMode\@PlayerMovement\@\@YA?AW4InputMode\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI enum class InputMode getInputMode(class EntityContext const&); // NOLINT
/**
 * @symbol
 * ?getPositionMode\@PlayerMovement\@\@YA?AW4PositionMode\@PlayerPositionModeComponent\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI enum class PlayerPositionModeComponent::PositionMode getPositionMode(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializePlayer\@PlayerMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializePlayer(class EntityContext&); // NOLINT
/**
 * @symbol ?setElytraFlightTimeTicks\@PlayerMovement\@\@YAXAEAVEntityContext\@\@AEBUTick\@\@\@Z
 */
MCAPI void setElytraFlightTimeTicks(class EntityContext&, struct Tick const&); // NOLINT
/**
 * @symbol
 * ?setPositionMode\@PlayerMovement\@\@YAXAEAVEntityContext\@\@W4PositionMode\@PlayerPositionModeComponent\@\@\@Z
 */
MCAPI void setPositionMode(class EntityContext&, enum class PlayerPositionModeComponent::PositionMode); // NOLINT

}; // namespace PlayerMovement
