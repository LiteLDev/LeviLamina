#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"

class BlockSourceComponent {
public:
    // prevent constructor by default
    BlockSourceComponent& operator=(BlockSourceComponent const&);
    BlockSourceComponent(BlockSourceComponent const&);
    BlockSourceComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockSourceComponent@@QEAA@V?$WeakRefT@U?$SharePtrRefTraits@VBlockSource@@@@@@@Z
    MCAPI explicit BlockSourceComponent(class WeakRefT<struct SharePtrRefTraits<class BlockSource>>);

    // symbol:
    // ?tryGetBlockSource@BlockSourceComponent@@QEBA?AV?$StackRefResultT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
    MCAPI class StackRefResultT<struct SharePtrRefTraits<class BlockSource>> tryGetBlockSource() const;

    // NOLINTEND
};
