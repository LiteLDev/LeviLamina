#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ClientBlockPipeline::VoxelShapeOcclusionHelper {
// functions
// NOLINTBEGIN
MCAPI bool shouldRenderFace(::Block const& currentBlock, ::Block const& neighborBlock, uchar neighborDirection);
// NOLINTEND

} // namespace ClientBlockPipeline::VoxelShapeOcclusionHelper
