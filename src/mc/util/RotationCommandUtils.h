#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RotationCommandUtils { class RotationData; }
// clang-format on

namespace RotationCommandUtils {
/**
 * @symbol ?ComputeFacingRotation\@RotationCommandUtils\@\@YA?AVVec2\@\@VVec3\@\@AEBV3\@H\@Z
 */
MCAPI class Vec2 ComputeFacingRotation(class Vec3, class Vec3 const&, int);
/**
 * @symbol
 * ?ComputeRotation\@RotationCommandUtils\@\@YA?AVVec2\@\@AEBVActor\@\@AEBV?$optional\@VRotationData\@RotationCommandUtils\@\@\@std\@\@H\@Z
 */
MCAPI class Vec2
ComputeRotation(class Actor const&, class std::optional<class RotationCommandUtils::RotationData> const&, int);
/**
 * @symbol ?getFacingDirectionFacingEntity\@RotationCommandUtils\@\@YA?AVVec3\@\@AEBVActor\@\@\@Z
 */
MCAPI class Vec3 getFacingDirectionFacingEntity(class Actor const&);
/**
 * @symbol
 * ?getFacingDirectionFacingPosition\@RotationCommandUtils\@\@YA?AVVec3\@\@HAEBVCommandOrigin\@\@VCommandPositionFloat\@\@\@Z
 */
MCAPI class Vec3 getFacingDirectionFacingPosition(int, class CommandOrigin const&, class CommandPositionFloat);

}; // namespace RotationCommandUtils
