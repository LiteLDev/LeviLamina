#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class BlockSourceValidityManager {
public:
    // prevent constructor by default
    BlockSourceValidityManager& operator=(BlockSourceValidityManager const&);
    BlockSourceValidityManager(BlockSourceValidityManager const&);
    BlockSourceValidityManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0BlockSourceValidityManager@@QEAA@V?$not_null@V?$StackRefResult@VDimensionManager@@@@@gsl@@V?$not_null@V?$StackRefResult@VGameplayUserManager@@@@@2@V?$unique_ptr@VIBlockSourceValidityProxy@@U?$default_delete@VIBlockSourceValidityProxy@@@std@@@std@@@Z
    MCAPI
    BlockSourceValidityManager(gsl::not_null<class StackRefResult<class DimensionManager>>, gsl::not_null<class StackRefResult<class GameplayUserManager>>, std::unique_ptr<class IBlockSourceValidityProxy>);

    // symbol: ??1BlockSourceValidityManager@@QEAA@XZ
    MCAPI ~BlockSourceValidityManager();

    // NOLINTEND
};
