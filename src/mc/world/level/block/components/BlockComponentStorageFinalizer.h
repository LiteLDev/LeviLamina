#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockComponentStorageFinalizer {
public:
    // prevent constructor by default
    BlockComponentStorageFinalizer& operator=(BlockComponentStorageFinalizer const&);
    BlockComponentStorageFinalizer(BlockComponentStorageFinalizer const&);
    BlockComponentStorageFinalizer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _checkForMissingGeometryComponent(::Block& block);

    MCAPI void _finalizeBlockTriggerComponents(::Block& block);

    MCAPI void _finalizeCollisionBoxComponent(::Block& block);

    MCAPI void _finalizeSelectionBoxComponent(::Block& block);

    MCAPI void addRemainingComponents(::Block& block);

    MCAPI void finalizeComponentData(::Block& block);
    // NOLINTEND
};
