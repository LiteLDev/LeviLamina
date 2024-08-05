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
    MCAPI void _finalizeBlockEventComponents(class BlockLegacy&);

    MCAPI void addRemainingComponents(class BlockLegacy&);

    MCAPI void finalizeComponentData(class BlockLegacy&);

    // NOLINTEND
};
