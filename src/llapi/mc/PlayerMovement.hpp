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
     * @symbol  ?getControllingPassengerID\@PlayerMovement\@\@YA?AUActorUniqueID\@\@AEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI struct ActorUniqueID getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const &, int);
    /**
     * @symbol  ?updatePlayerOnInput\@PlayerMovement\@\@YAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@AEAVVec3\@\@\@Z
     */
    MCAPI void updatePlayerOnInput(struct IPlayerMovementProxy &, class MoveInputHandler &, class Vec3 &);
    /**
     * @symbol  ?updatePlayerRiding\@PlayerMovement\@\@YAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@\@Z
     */
    MCAPI void updatePlayerRiding(struct IPlayerMovementProxy &, class MoveInputHandler &);
    /**
     * @symbol  ?updateSwimTravel\@PlayerMovement\@\@YAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@AEAVVec3\@\@\@Z
     */
    MCAPI void updateSwimTravel(struct IPlayerMovementProxy &, class MoveInputHandler &, class Vec3 &);

};