#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _checkForCollisionComponentBoxDuplication(::Block& block);

    MCAPI void _checkForSelectionBoxComponentDuplication(::Block& block);

    MCAPI void _finalizeBlockTriggerComponents(::Block& block);

    MCAPI void _finalizeCollisionBoxComponent(::Block& block);

    MCAPI void _finalizeSelectionBoxComponent(::Block& block);

    MCAPI void addRemainingComponents(::Block& block);
    // NOLINTEND
};
