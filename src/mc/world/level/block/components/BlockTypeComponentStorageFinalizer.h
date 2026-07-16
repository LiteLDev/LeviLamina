#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

class BlockTypeComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _finalizeCollisionBoxComponent(::BlockType& blockType);

    MCAPI void _finalizeRedstoneProducerComponent(::BlockType& blockType);

    MCAPI void _finalizeSelectionBoxComponent(::BlockType& blockType);

    MCAPI void addRemainingComponents(::BlockType& blockType);
    // NOLINTEND
};
