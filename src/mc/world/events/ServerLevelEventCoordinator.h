#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerLevelEventCoordinator {

public:
    // prevent constructor by default
    ServerLevelEventCoordinator& operator=(ServerLevelEventCoordinator const&) = delete;
    ServerLevelEventCoordinator(ServerLevelEventCoordinator const&)            = delete;
    ServerLevelEventCoordinator()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?sendLevelAddedPlayer\@ServerLevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void sendLevelAddedPlayer(class Level&, class Player&);
    /**
     * @symbol ?sendLevelRemovedPlayer\@ServerLevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void sendLevelRemovedPlayer(class Level&, class Player&);
    // NOLINTEND
};
