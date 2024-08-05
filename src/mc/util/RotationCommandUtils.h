#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RotationCommandUtils { class RotationData; }
// clang-format on

namespace RotationCommandUtils {
// NOLINTBEGIN
MCAPI class Vec2 ComputeFacingRotation(class Vec3 destination, class Vec3 const& facePosition, int commandVersion);

MCAPI class Vec2 ComputeRotation(
    class Actor const& victim,
    std::optional<class RotationCommandUtils::RotationData> const&,
    int commandVersion
);

MCAPI class Vec3 getFacingDirectionFacingEntity(class Actor const&);

MCAPI class Vec3
getFacingDirectionFacingPosition(int version, class CommandOrigin const& origin, class CommandPositionFloat);
// NOLINTEND

}; // namespace RotationCommandUtils
