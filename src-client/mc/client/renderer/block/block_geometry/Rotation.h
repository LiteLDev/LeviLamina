#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Axis.h"

namespace BlockGeometry {

struct Rotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>          origin;
    ::ll::TypedStorage<4, 4, ::BlockGeometry::Axis> axis;
    ::ll::TypedStorage<4, 4, float>                 angle;
    // NOLINTEND
};

} // namespace BlockGeometry
