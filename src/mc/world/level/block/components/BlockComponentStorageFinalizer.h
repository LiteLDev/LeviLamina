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
    MCAPI void _finalizeBlockEventComponents(class Block&);

    MCAPI void addRemainingComponents(class Block&);

    MCAPI void finalizeComponentData(class Block&);

    // NOLINTEND
};
