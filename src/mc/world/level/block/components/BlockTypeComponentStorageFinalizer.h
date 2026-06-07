#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class BlockTypeComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _finalizeBlockTriggerComponents(::BlockType& blockType);

    MCAPI void _finalizeCollisionBoxComponent(::BlockType& blockType);

    MCAPI void _finalizeRedstoneProducerComponent(::BlockType& blockType);

    MCAPI void _finalizeSelectionBoxComponent(::BlockType& blockType);

    MCAPI void _updateDestructionParticlesComponent(::BlockType& blockType);

    MCAPI void addRemainingComponents(::BlockType& blockType);

    MCAPI void finalizeComponentData(::BlockType& blockType);

    MCAPI void
    finalizeComponentDataForVoxelShapes(::BlockType& blockType, ::VoxelShapes::VoxelShapeRegistry& voxelShapeRegistry);
    // NOLINTEND
};
