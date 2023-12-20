#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"

class PlayerTickManager {
public:
    // prevent constructor by default
    PlayerTickManager& operator=(PlayerTickManager const&);
    PlayerTickManager(PlayerTickManager const&);
    PlayerTickManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0PlayerTickManager@@QEAA@V?$StackRefResultT@U?$SharePtrRefTraits@VDimensionManager@@@@@@V?$StackRefResultT@U?$SharePtrRefTraits@VGameplayUserManager@@@@@@V?$unique_ptr@VIPlayerTickProxy@@U?$default_delete@VIPlayerTickProxy@@@std@@@std@@_N@Z
    MCAPI PlayerTickManager(
        class StackRefResultT<struct SharePtrRefTraits<class DimensionManager>>,
        class StackRefResultT<struct SharePtrRefTraits<class GameplayUserManager>>,
        std::unique_ptr<class IPlayerTickProxy>,
        bool
    );

    // symbol: ?processPlayerNetworking@PlayerTickManager@@QEAAXAEBUTick@@@Z
    MCAPI void processPlayerNetworking(struct Tick const&);

    // symbol: ?tick@PlayerTickManager@@QEAAXAEBUTick@@@Z
    MCAPI void tick(struct Tick const&);

    // symbol: ??1PlayerTickManager@@QEAA@XZ
    MCAPI ~PlayerTickManager();

    // NOLINTEND
};
