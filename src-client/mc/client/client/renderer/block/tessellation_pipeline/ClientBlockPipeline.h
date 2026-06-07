#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class Vec3;
namespace ClientBlockPipeline { struct PositionVertexAttributes; }
namespace ClientBlockPipeline { struct QuadIndices; }
// clang-format on

namespace ClientBlockPipeline {
// functions
// NOLINTBEGIN
MCNAPI ::Matrix _buildPivotRotation(::Vec3 const& eulerAnglesRadians, ::Vec3 const& pivotLocation);

MCNAPI ::Vec3 computeCentroid(
    ::ClientBlockPipeline::PositionVertexAttributes const& positions,
    ::ClientBlockPipeline::QuadIndices const&              face
);
// NOLINTEND

} // namespace ClientBlockPipeline
