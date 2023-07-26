#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerEventCoordinator {

public:
    // prevent constructor by default
    ServerPlayerEventCoordinator& operator=(ServerPlayerEventCoordinator const&) = delete;
    ServerPlayerEventCoordinator(ServerPlayerEventCoordinator const&)            = delete;
    ServerPlayerEventCoordinator()                                               = delete;

public:
    /**
     * @symbol ?sendPlayerAuthInputApplied\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerAuthInputApplied(class Player&); // NOLINT
    /**
     * @symbol ?sendPlayerAuthInputReceived\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerAuthInputReceived(class Player&); // NOLINT
    /**
     * @symbol ?sendPlayerMovementAnomaly\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void sendPlayerMovementAnomaly(class Player&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?sendPlayerMovementCorrected\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void sendPlayerMovementCorrected(class Player&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?sendPlayerOnGround\@ServerPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void sendPlayerOnGround(class Player&); // NOLINT
};
