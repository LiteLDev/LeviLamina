/**
 * @file  PlayerMovement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PlayerMovement.
 *
 */
namespace PlayerMovement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?applyInputLocks\@PlayerMovement\@\@YAXAEBUClientInputLockComponent\@\@AEAUMoveInputState\@\@\@Z
     */
    MCAPI void applyInputLocks(struct ClientInputLockComponent const &, struct MoveInputState &);
    /**
     * @symbol ?calculateMoveVector\@PlayerMovement\@\@YA?AVVec2\@\@AEBUMoveInputState\@\@AEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI class Vec2 calculateMoveVector(struct MoveInputState const &, struct IPlayerMovementProxy &);
    /**
     * @symbol ?calculateMoveVector\@PlayerMovement\@\@YA?AVVec2\@\@AEBUMoveInputState\@\@AEBVLayeredAbilities\@\@AEBVSynchedActorData\@\@_NPEBUSneakingComponent\@\@\@Z
     */
    MCAPI class Vec2 calculateMoveVector(struct MoveInputState const &, class LayeredAbilities const &, class SynchedActorData const &, bool, struct SneakingComponent const *);
    /**
     * @symbol ?getControllingPassengerID\@PlayerMovement\@\@YA?AUActorUniqueID\@\@AEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI struct ActorUniqueID getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const &, int);
    /**
     * @symbol ?getPositionMode\@PlayerMovement\@\@YA?AW4PositionMode\@PlayerPositionModeComponent\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI enum class PlayerPositionModeComponent::PositionMode getPositionMode(class EntityContext const &);
    /**
     * @symbol ?initializePlayer\@PlayerMovement\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializePlayer(class EntityContext &);
    /**
     * @symbol ?setPositionMode\@PlayerMovement\@\@YAXAEAVEntityContext\@\@W4PositionMode\@PlayerPositionModeComponent\@\@\@Z
     */
    MCAPI void setPositionMode(class EntityContext &, enum class PlayerPositionModeComponent::PositionMode);
    /**
     * @symbol ?updatePlayerOnInput\@PlayerMovement\@\@YAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@AEAVVec3\@\@\@Z
     */
    MCAPI void updatePlayerOnInput(struct IPlayerMovementProxy &, class MoveInputHandler &, class Vec3 &);
    /**
     * @symbol ?updatePlayerRiding\@PlayerMovement\@\@YAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@\@Z
     */
    MCAPI void updatePlayerRiding(struct IPlayerMovementProxy &, class MoveInputHandler &);
    /**
     * @symbol ?updatePlayerState\@PlayerMovement\@\@YAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void updatePlayerState(struct IPlayerMovementProxy &, class MoveInputHandler &, class IConstBlockSource const &);
    /**
     * @symbol ?updateSwimTravel\@PlayerMovement\@\@YAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@AEAVVec3\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void updateSwimTravel(struct IPlayerMovementProxy &, class MoveInputHandler &, class Vec3 &, class IConstBlockSource const &);

};