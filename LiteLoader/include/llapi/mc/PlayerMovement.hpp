/**
 * @file  MC/PlayerMovement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1692369109
     * @symbol ?getControllingPassengerID@PlayerMovement@@YA?AUActorUniqueID@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@H@Z
     */
    MCAPI struct ActorUniqueID getControllingPassengerID(std::vector<struct ActorUniqueID> const &, int);
    /**
     * @hash   413553023
     * @symbol ?updatePlayerOnInput@PlayerMovement@@YAXAEAUIPlayerMovementProxy@@AEAVMoveInputHandler@@AEAVVec3@@@Z
     */
    MCAPI void updatePlayerOnInput(struct IPlayerMovementProxy &, class MoveInputHandler &, class Vec3 &);
    /**
     * @hash   1721163526
     * @symbol ?updatePlayerRiding@PlayerMovement@@YAXAEAUIPlayerMovementProxy@@AEAVMoveInputHandler@@@Z
     */
    MCAPI void updatePlayerRiding(struct IPlayerMovementProxy &, class MoveInputHandler &);
    /**
     * @hash   397300669
     * @symbol ?updateSwimTravel@PlayerMovement@@YAXAEAUIPlayerMovementProxy@@AEAVMoveInputHandler@@AEAVVec3@@@Z
     */
    MCAPI void updateSwimTravel(struct IPlayerMovementProxy &, class MoveInputHandler &, class Vec3 &);

};