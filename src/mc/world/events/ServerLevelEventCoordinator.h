#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerLevelEventCoordinator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVELEVENTCOORDINATOR
public:
    ServerLevelEventCoordinator& operator=(ServerLevelEventCoordinator const&) = delete;
    ServerLevelEventCoordinator(ServerLevelEventCoordinator const&)            = delete;
    ServerLevelEventCoordinator()                                              = delete;
#endif

public:
    /**
     * @symbol ?sendLevelAddedPlayer\@ServerLevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void sendLevelAddedPlayer(class Level&, class Player&);
    /**
     * @symbol ?sendLevelRemovedPlayer\@ServerLevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void sendLevelRemovedPlayer(class Level&, class Player&);
};
