#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class LevelBlockDestroyer {
public:
    // prevent constructor by default
    LevelBlockDestroyer& operator=(LevelBlockDestroyer const&);
    LevelBlockDestroyer(LevelBlockDestroyer const&);
    LevelBlockDestroyer();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0LevelBlockDestroyer@@QEAA@AEBV?$not_null@V?$StackRefResult@VLevelEventManager@@@@@gsl@@V?$unique_ptr@VILevelBlockDestroyerProxy@@U?$default_delete@VILevelBlockDestroyerProxy@@@std@@@std@@@Z
    MCAPI
    LevelBlockDestroyer(gsl::not_null<class StackRefResult<class LevelEventManager>> const&, std::unique_ptr<class ILevelBlockDestroyerProxy>);

    // symbol: ?destroyBlock@LevelBlockDestroyer@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI bool destroyBlock(class BlockSource&, class BlockPos const&, bool);

    // symbol: ??1LevelBlockDestroyer@@QEAA@XZ
    MCAPI ~LevelBlockDestroyer();

    // NOLINTEND
};
