#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/mat.h"
#include "mc/external/glm/vec.h"

namespace mce {

class MathUtility {

public:
    // prevent constructor by default
    MathUtility& operator=(MathUtility const&) = delete;
    MathUtility(MathUtility const&)            = delete;
    MathUtility()                              = delete;

public:
    /**
     * @symbol ?floatEqualsEpsilon\@MathUtility\@mce\@\@SA_NMMM\@Z
     */
    MCAPI static bool floatEqualsEpsilon(float, float, float); // NOLINT
    /**
     * @symbol
     * ?generateRotationAroundPivotMat\@MathUtility\@mce\@\@SA?AU?$mat\@$03$03M$0A\@\@glm\@\@AEBU34\@AEBU?$vec\@$02M$0A\@\@4\@\@Z
     */
    MCAPI static struct glm::mat<4, 4, float, 0>
    generateRotationAroundPivotMat(struct glm::mat<4, 4, float, 0> const&, struct glm::vec<3, float, 0> const&); // NOLINT
    /**
     * @symbol ?rotateVec2\@MathUtility\@mce\@\@SA?AU?$vec\@$01M$0A\@\@glm\@\@AEBU34\@M\@Z
     */
    MCAPI static struct glm::vec<2, float, 0> rotateVec2(struct glm::vec<2, float, 0> const&, float); // NOLINT
};

}; // namespace mce
