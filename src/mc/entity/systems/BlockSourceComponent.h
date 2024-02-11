#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"

class BlockSourceComponent {
public:
    // prevent constructor by default
    BlockSourceComponent& operator=(BlockSourceComponent const&);
    BlockSourceComponent(BlockSourceComponent const&);
    BlockSourceComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockSourceComponent@@QEAA@V?$WeakRef@VBlockSource@@@@@Z
    MCAPI explicit BlockSourceComponent(class WeakRef<class BlockSource>);

    // symbol: ?tryGetBlockSource@BlockSourceComponent@@QEBA?AV?$StackRefResult@VBlockSource@@@@XZ
    MCAPI class StackRefResult<class BlockSource> tryGetBlockSource() const;

    // NOLINTEND
};
