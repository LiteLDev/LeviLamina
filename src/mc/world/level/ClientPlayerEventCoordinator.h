#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientPlayerEventCoordinator {

public:
    // prevent constructor by default
    ClientPlayerEventCoordinator& operator=(ClientPlayerEventCoordinator const&) = delete;
    ClientPlayerEventCoordinator(ClientPlayerEventCoordinator const&)            = delete;
    ClientPlayerEventCoordinator()                                               = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
