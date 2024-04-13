#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockLegacyComponentStorageFinalizer {
public:
    // prevent constructor by default
    BlockLegacyComponentStorageFinalizer& operator=(BlockLegacyComponentStorageFinalizer const&);
    BlockLegacyComponentStorageFinalizer(BlockLegacyComponentStorageFinalizer const&);
    BlockLegacyComponentStorageFinalizer();

    // private:
    // NOLINTBEGIN
    // symbol: ?_finalizeBlockEventComponents@BlockLegacyComponentStorageFinalizer@@AEAAXAEAVBlockLegacy@@@Z
    MCAPI void _finalizeBlockEventComponents(class BlockLegacy&);

    // symbol: ?addRemainingComponents@BlockLegacyComponentStorageFinalizer@@AEAAXAEAVBlockLegacy@@@Z
    MCAPI void addRemainingComponents(class BlockLegacy&);

    // symbol: ?finalizeComponentData@BlockLegacyComponentStorageFinalizer@@AEAAXAEAVBlockLegacy@@@Z
    MCAPI void finalizeComponentData(class BlockLegacy&);

    // NOLINTEND
};
