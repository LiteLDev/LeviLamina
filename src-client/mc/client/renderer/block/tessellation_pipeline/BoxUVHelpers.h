#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/Geometry.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BoxSchematic; }
// clang-format on

namespace ClientBlockPipeline::BoxUVHelpers {
// functions
// NOLINTBEGIN
MCAPI void computeBoxUvs(
    ::Geometry::Box const&               box,
    ::glm::vec2 const&                   textureDimensions,
    ::ClientBlockPipeline::BoxSchematic& boxSchematic,
    schar                                rotX,
    schar                                rotY,
    schar                                rotZ
);
// NOLINTEND

} // namespace ClientBlockPipeline::BoxUVHelpers
