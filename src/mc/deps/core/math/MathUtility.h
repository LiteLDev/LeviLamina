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
    // NOLINTBEGIN
    MCAPI static bool floatEqualsEpsilon(float a, float b, float epsilon);

    MCAPI static glm::mat4x4 generateRotationAroundPivotMat(glm::mat4x4 const&, glm::vec3 const&);

    MCAPI static glm::vec2 rotateVec2(glm::vec2 const&, float);

    // NOLINTEND
};

}; // namespace mce
