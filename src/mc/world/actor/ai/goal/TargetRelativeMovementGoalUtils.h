#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TargetRelativeMovementGoalUtils {
// NOLINTBEGIN
// symbol:
// ?calculateJumpVectorForElevationAngle@TargetRelativeMovementGoalUtils@@YA?AV?$optional@VVec3@@@std@@AEAVIBlockSource@@AEBVAABB@@AEBVVec3@@2MMM_N@Z
MCAPI std::optional<class Vec3> calculateJumpVectorForElevationAngle(
    class IBlockSource&,
    class AABB const&,
    class Vec3 const&,
    class Vec3 const&,
    float,
    float,
    float,
    bool
);

// symbol: ?getRandomPointBehindTarget@TargetRelativeMovementGoalUtils@@YA?AVVec3@@AEBVActor@@0MMM@Z
MCAPI class Vec3 getRandomPointBehindTarget(class Actor const&, class Actor const&, float, float, float);

// symbol: ?validTransition@TargetRelativeMovementGoalUtils@@YA_NAEBVAABB@@AEAVIBlockSource@@AEBVVec3@@2M@Z
MCAPI bool validTransition(class AABB const&, class IBlockSource&, class Vec3 const&, class Vec3 const&, float);
// NOLINTEND

}; // namespace TargetRelativeMovementGoalUtils
