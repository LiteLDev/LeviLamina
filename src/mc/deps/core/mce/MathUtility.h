#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/mat.h"
#include "mc/external/glm/vec.h"

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

    MCAPI static struct glm::mat<4, 4, float, 0>
    generateRotationAroundPivotMat(struct glm::mat<4, 4, float, 0> const&, struct glm::vec<3, float, 0> const&);

    MCAPI static struct glm::vec<2, float, 0> rotateVec2(struct glm::vec<2, float, 0> const&, float);

    // NOLINTEND
};

}; // namespace mce
