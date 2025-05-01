#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace PaddleBehaviorUtility {
// functions
// NOLINTBEGIN
MCNAPI ::std::array<float, 2>
computePaddleForcesBasedOnGaze(::Vec3& inGazeDir, float forceLength, float facingOffsetFactor, float yRot);
// NOLINTEND

} // namespace PaddleBehaviorUtility
