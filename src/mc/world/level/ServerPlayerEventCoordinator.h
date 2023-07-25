#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerEventCoordinator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYEREVENTCOORDINATOR
public:
    ServerPlayerEventCoordinator& operator=(ServerPlayerEventCoordinator const&) = delete;
    ServerPlayerEventCoordinator(ServerPlayerEventCoordinator const&)            = delete;
    ServerPlayerEventCoordinator()                                               = delete;
#endif

public:
    /**
     * @symbol ?sendPlayerAuthInputApplied\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerAuthInputApplied(class Player&);
    /**
     * @symbol ?sendPlayerAuthInputReceived\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerAuthInputReceived(class Player&);
    /**
     * @symbol ?sendPlayerMovementAnomaly\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void sendPlayerMovementAnomaly(class Player&, class Vec3 const&, float, float);
    /**
     * @symbol ?sendPlayerMovementCorrected\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void sendPlayerMovementCorrected(class Player&, class Vec3 const&, float, float);
    /**
     * @symbol ?sendPlayerOnGround\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerOnGround(class Player&);
};
