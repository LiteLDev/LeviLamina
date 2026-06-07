#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class BlockType;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

namespace BlockVoxelShapesCullingComponentFinalizer {
// functions
// NOLINTBEGIN
MCAPI void finalizeComponentOnBlock(
    ::BlockComponentStorage&           components,
    ::VoxelShapes::VoxelShapeRegistry& voxelShapeRegistry,
    ::BlockType const&                 blockType
);
// NOLINTEND

} // namespace BlockVoxelShapesCullingComponentFinalizer
