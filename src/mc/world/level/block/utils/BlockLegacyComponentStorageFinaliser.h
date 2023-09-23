#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockLegacyComponentStorageFinaliser {
public:
    // prevent constructor by default
    BlockLegacyComponentStorageFinaliser& operator=(BlockLegacyComponentStorageFinaliser const&);
    BlockLegacyComponentStorageFinaliser(BlockLegacyComponentStorageFinaliser const&);
    BlockLegacyComponentStorageFinaliser();

    // private:
    // NOLINTBEGIN
    // symbol: ?_finalizeCollisionBoxComponent@BlockLegacyComponentStorageFinaliser@@AEAAXAEAVBlockLegacy@@@Z
    MCAPI void _finalizeCollisionBoxComponent(class BlockLegacy&);

    // symbol: ?_finalizeSelectionBoxComponent@BlockLegacyComponentStorageFinaliser@@AEAAXAEAVBlockLegacy@@@Z
    MCAPI void _finalizeSelectionBoxComponent(class BlockLegacy&);

    // symbol: ?addRemainingComponents@BlockLegacyComponentStorageFinaliser@@AEAAXAEAVBlockLegacy@@@Z
    MCAPI void addRemainingComponents(class BlockLegacy&);

    // symbol: ?finalizeComponentData@BlockLegacyComponentStorageFinaliser@@AEAAXAEAVBlockLegacy@@@Z
    MCAPI void finalizeComponentData(class BlockLegacy&);

    // NOLINTEND
};
