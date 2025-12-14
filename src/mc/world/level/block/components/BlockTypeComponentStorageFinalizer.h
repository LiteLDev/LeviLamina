#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
struct BlockComponentFinalizerForRendererContext;
// clang-format on

class BlockTypeComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _finalizeBlockTriggerComponents(::BlockType& blockType);

    MCAPI void _updateDestructionParticlesComponent(::BlockType& blockType);

    MCAPI void finalizeComponentData(::BlockType& blockType);

    MCAPI_C void finalizeComponentDataForRendering(
        ::BlockType&                                 blockType,
        ::BlockComponentFinalizerForRendererContext& finalizerContext
    );
    // NOLINTEND
};
