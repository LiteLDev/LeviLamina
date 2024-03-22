#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class PlayerTickManager {
public:
    // prevent constructor by default
    PlayerTickManager& operator=(PlayerTickManager const&);
    PlayerTickManager(PlayerTickManager const&);
    PlayerTickManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0PlayerTickManager@@QEAA@AEBV?$not_null@V?$StackRefResult@VDimensionManager@@@@@gsl@@AEBV?$not_null@V?$StackRefResult@VGameplayUserManager@@@@@2@V?$unique_ptr@VIPlayerTickProxy@@U?$default_delete@VIPlayerTickProxy@@@std@@@std@@_N@Z
    MCAPI PlayerTickManager(
        gsl::not_null<class StackRefResult<class DimensionManager>> const&,
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const&,
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
