#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerDimensionTransferManager {
public:
    // prevent constructor by default
    PlayerDimensionTransferManager& operator=(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0PlayerDimensionTransferManager@@QEAA@V?$unique_ptr@VPlayerLimboActorManager@@U?$default_delete@VPlayerLimboActorManager@@@std@@@std@@@Z
    MCAPI explicit PlayerDimensionTransferManager(std::unique_ptr<class PlayerLimboActorManager>);

    // symbol: ?getPlayerLimboActorManager@PlayerDimensionTransferManager@@QEAAPEAVPlayerLimboActorManager@@XZ
    MCAPI class PlayerLimboActorManager* getPlayerLimboActorManager();

    // symbol: ??1PlayerDimensionTransferManager@@QEAA@XZ
    MCAPI ~PlayerDimensionTransferManager();

    // NOLINTEND
};
