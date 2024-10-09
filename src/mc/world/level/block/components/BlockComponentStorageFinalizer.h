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
    MCAPI void _finalizeBlockEventComponents(class Block& block);

    MCAPI void addRemainingComponents(class Block& block);

    MCAPI void finalizeComponentData(class Block& block);

    // NOLINTEND
};
