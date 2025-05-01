#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class MathUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::glm::mat4x4 generateRotationAroundPivotMat(::glm::mat4x4 const& rotation, ::glm::vec3 const& pivot);
    // NOLINTEND
};

} // namespace mce
