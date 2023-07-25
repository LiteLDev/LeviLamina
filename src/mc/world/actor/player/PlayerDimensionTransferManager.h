#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerDimensionTransferManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERDIMENSIONTRANSFERMANAGER
public:
    PlayerDimensionTransferManager& operator=(PlayerDimensionTransferManager const&) = delete;
    PlayerDimensionTransferManager(PlayerDimensionTransferManager const&)            = delete;
    PlayerDimensionTransferManager()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ??0PlayerDimensionTransferManager\@\@QEAA\@V?$unique_ptr\@VPlayerLimboActorManager\@\@U?$default_delete\@VPlayerLimboActorManager\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerDimensionTransferManager(std::unique_ptr<class PlayerLimboActorManager>);
    /**
     * @symbol ?getPlayerLimboActorManager\@PlayerDimensionTransferManager\@\@QEAAAEAVPlayerLimboActorManager\@\@XZ
     */
    MCAPI class PlayerLimboActorManager& getPlayerLimboActorManager();
    /**
     * @symbol ??1PlayerDimensionTransferManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDimensionTransferManager();
};
