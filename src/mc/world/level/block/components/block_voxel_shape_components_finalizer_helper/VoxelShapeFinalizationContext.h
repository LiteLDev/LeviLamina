#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class BlockType;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

namespace BlockVoxelShapeComponentsFinalizerHelper {

struct VoxelShapeFinalizationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockComponentStorage&>           mComponents;
    ::ll::TypedStorage<8, 8, ::VoxelShapes::VoxelShapeRegistry&> mVoxelShapeRegistry;
    ::ll::TypedStorage<1, 1, bool const>                         mIsVanillaBlock;
    ::ll::TypedStorage<8, 8, ::BlockType const&>                 mBlockType;
    ::ll::TypedStorage<1, 1, bool const>                         mIsPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeFinalizationContext& operator=(VoxelShapeFinalizationContext const&);
    VoxelShapeFinalizationContext(VoxelShapeFinalizationContext const&);
    VoxelShapeFinalizationContext();
};

} // namespace BlockVoxelShapeComponentsFinalizerHelper
