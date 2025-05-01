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
    MCNAPI void _checkForCollisionComponentBoxDuplication(::Block& block);

    MCNAPI void _checkForSelectionBoxComponentDuplication(::Block& block);

    MCNAPI void _finalizeBlockTriggerComponents(::Block& block);

    MCNAPI void _finalizeCollisionBoxComponent(::Block& block);

    MCNAPI void _finalizeSelectionBoxComponent(::Block& block);

    MCNAPI void addRemainingComponents(::Block& block);
    // NOLINTEND
};
