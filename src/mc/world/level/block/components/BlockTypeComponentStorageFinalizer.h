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
    MCNAPI void _finalizeBlockTriggerComponents(::BlockType& blockType);

    MCNAPI void _updateDestructionParticlesComponent(::BlockType& blockType);

    MCNAPI void finalizeComponentData(::BlockType& blockType);

    MCNAPI_C void finalizeComponentDataForRendering(
        ::BlockType&                                 blockType,
        ::BlockComponentFinalizerForRendererContext& finalizerContext
    );
    // NOLINTEND
};
