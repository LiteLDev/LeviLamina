#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentStorageFinalizer {
public:
    // prevent constructor by default
    BlockComponentStorageFinalizer& operator=(BlockComponentStorageFinalizer const&);
    BlockComponentStorageFinalizer(BlockComponentStorageFinalizer const&);
    BlockComponentStorageFinalizer();

    // private:
    // NOLINTBEGIN
    // symbol: ?_finalizeCollisionBoxComponent@BlockComponentStorageFinalizer@@AEAAXAEAVBlock@@@Z
    MCAPI void _finalizeCollisionBoxComponent(class Block&);

    // symbol: ?_finalizeSelectionBoxComponent@BlockComponentStorageFinalizer@@AEAAXAEAVBlock@@@Z
    MCAPI void _finalizeSelectionBoxComponent(class Block&);

    // symbol: ?addRemainingComponents@BlockComponentStorageFinalizer@@AEAAXAEAVBlock@@@Z
    MCAPI void addRemainingComponents(class Block&);

    // symbol: ?finalizeComponentData@BlockComponentStorageFinalizer@@AEAAXAEAVBlock@@@Z
    MCAPI void finalizeComponentData(class Block&);

    // NOLINTEND
};
