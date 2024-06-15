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
    // ??0BlockSourceValidityManager@@QEAA@AEBV?$not_null@V?$StackRefResult@VDimensionManager@@@@@gsl@@AEBV?$not_null@V?$StackRefResult@VGameplayUserManager@@@@@2@V?$unique_ptr@VIBlockSourceValidityProxy@@U?$default_delete@VIBlockSourceValidityProxy@@@std@@@std@@@Z
    MCAPI
    BlockSourceValidityManager(gsl::not_null<class StackRefResult<class DimensionManager>> const&, gsl::not_null<class StackRefResult<class GameplayUserManager>> const&, std::unique_ptr<class IBlockSourceValidityProxy>);

    // symbol: ?addBlockSourceForValidityTracking@BlockSourceValidityManager@@QEAAXPEAVIBlockSource@@@Z
    MCAPI void addBlockSourceForValidityTracking(class IBlockSource*);

    // symbol: ?checkBlockSourceValidity@BlockSourceValidityManager@@QEAAXXZ
    MCAPI void checkBlockSourceValidity();

    // symbol: ?removeBlockSourceFromValidityTracking@BlockSourceValidityManager@@QEAAXPEAVIBlockSource@@@Z
    MCAPI void removeBlockSourceFromValidityTracking(class IBlockSource*);

    // symbol: ??1BlockSourceValidityManager@@QEAA@XZ
    MCAPI ~BlockSourceValidityManager();

    // NOLINTEND
};
