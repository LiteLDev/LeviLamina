#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientPlayerEventCoordinator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTPLAYEREVENTCOORDINATOR
public:
    ClientPlayerEventCoordinator& operator=(ClientPlayerEventCoordinator const&) = delete;
    ClientPlayerEventCoordinator(ClientPlayerEventCoordinator const&)            = delete;
    ClientPlayerEventCoordinator()                                               = delete;
#endif

public:
    /**
     * @symbol ?sendPlayerDestroyedBlock\@ClientPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void sendPlayerDestroyedBlock(class Player&, class Block const&);
    /**
     * @symbol ?sendPlayerInput\@ClientPlayerEventCoordinator\@\@QEAAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI void sendPlayerInput(struct IPlayerMovementProxy&);
    /**
     * @symbol ?sendStartDestroyBlock\@ClientPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@AEAE\@Z
     */
    MCAPI void sendStartDestroyBlock(class Player&, class BlockPos const&, unsigned char&);
};
