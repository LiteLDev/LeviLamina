/**
 * @file  ServerPlayerEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerEventCoordinator.
 *
 */
class ServerPlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYEREVENTCOORDINATOR
public:
    class ServerPlayerEventCoordinator& operator=(class ServerPlayerEventCoordinator const &) = delete;
    ServerPlayerEventCoordinator(class ServerPlayerEventCoordinator const &) = delete;
    ServerPlayerEventCoordinator() = delete;
#endif

public:
    /**
     * @hash   1470378710
     * @symbol  ?sendPlayerAuthInputApplied\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerAuthInputApplied(class Player &);
    /**
     * @hash   1644722584
     * @symbol  ?sendPlayerAuthInputReceived\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerAuthInputReceived(class Player &);
    /**
     * @hash   970011305
     * @symbol  ?sendPlayerMovementAnomaly\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void sendPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   -1640118135
     * @symbol  ?sendPlayerMovementCorrected\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void sendPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   405236192
     * @symbol  ?sendPlayerOnGround\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerOnGround(class Player &);

};