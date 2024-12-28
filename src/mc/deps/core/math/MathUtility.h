#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class MathUtility {
public:
    // prevent constructor by default
    MathUtility& operator=(MathUtility const&);
    MathUtility(MathUtility const&);
    MathUtility();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool floatEqualsEpsilon(float a, float b, float epsilon);

    MCAPI static ::glm::mat4x4 generateRotationAroundPivotMat(::glm::mat4x4 const& rotation, ::glm::vec3 const& pivot);

    MCAPI static ::glm::vec2 rotateVec2(::glm::vec2 const& vec, float angleDeg);
    // NOLINTEND
};

} // namespace mce
