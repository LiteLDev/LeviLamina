#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Matrix;
class Vec3;
namespace ClientBlockPipeline::WorldView { class Interface; }
// clang-format on

namespace ClientBlockPipeline {
// functions
// NOLINTBEGIN
MCNAPI ::Matrix _buildPivotRotation(::Vec3 const& eulerAnglesRadians, ::Vec3 const& pivotLocation);

MCNAPI bool
_isSolidHelper(::Block const& block, ::BlockPos const& pos, ::ClientBlockPipeline::WorldView::Interface const& view);
// NOLINTEND

} // namespace ClientBlockPipeline
