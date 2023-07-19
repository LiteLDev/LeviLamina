/**
 * @file  PlayerDimensionTransferManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerDimensionTransferManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERDIMENSIONTRANSFERMANAGER
public:
    class PlayerDimensionTransferManager& operator=(class PlayerDimensionTransferManager const &) = delete;
    PlayerDimensionTransferManager(class PlayerDimensionTransferManager const &) = delete;
    PlayerDimensionTransferManager() = delete;
#endif

public:
    /**
     * @symbol ??0PlayerDimensionTransferManager\@\@QEAA\@V?$unique_ptr\@VPlayerLimboActorManager\@\@U?$default_delete\@VPlayerLimboActorManager\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerDimensionTransferManager(std::unique_ptr<class PlayerLimboActorManager>);
    /**
     * @symbol ?getPlayerLimboActorManager\@PlayerDimensionTransferManager\@\@QEAAAEAVPlayerLimboActorManager\@\@XZ
     */
    MCAPI class PlayerLimboActorManager & getPlayerLimboActorManager();
    /**
     * @symbol ??1PlayerDimensionTransferManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDimensionTransferManager();

};
