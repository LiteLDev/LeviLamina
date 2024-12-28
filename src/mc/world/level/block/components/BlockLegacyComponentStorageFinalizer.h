#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
// clang-format on

class BlockLegacyComponentStorageFinalizer {
public:
    // prevent constructor by default
    BlockLegacyComponentStorageFinalizer& operator=(BlockLegacyComponentStorageFinalizer const&);
    BlockLegacyComponentStorageFinalizer(BlockLegacyComponentStorageFinalizer const&);
    BlockLegacyComponentStorageFinalizer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _finalizeBlockTriggerComponents(::BlockLegacy& blockLegacy);

    MCAPI void _finalizeCollisionBoxComponent(::BlockLegacy& blockLegacy);

    MCAPI void _finalizeSelectionBoxComponent(::BlockLegacy& blockLegacy);

    MCAPI void addRemainingComponents(::BlockLegacy& blockLegacy);

    MCAPI void finalizeComponentData(::BlockLegacy& blockLegacy);
    // NOLINTEND
};
