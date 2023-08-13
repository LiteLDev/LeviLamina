#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/PlayerEventCoordinator.h"

class ServerPlayerEventCoordinator : public ::PlayerEventCoordinator {

public:
    // prevent constructor by default
    ServerPlayerEventCoordinator& operator=(ServerPlayerEventCoordinator const&) = delete;
    ServerPlayerEventCoordinator(ServerPlayerEventCoordinator const&)            = delete;
    ServerPlayerEventCoordinator()                                               = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
