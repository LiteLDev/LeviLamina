#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandPositionFloat;
class Vec2;
class Vec3;
namespace RotationCommandUtils { class RotationData; }
// clang-format on

namespace RotationCommandUtils {
// functions
// NOLINTBEGIN
MCAPI ::Vec2 ComputeFacingRotation(::Vec3 destination, ::Vec3 const& facePosition, int commandVersion);

MCAPI ::Vec2 ComputeRotation(
    ::Actor const&                                               victim,
    ::std::optional<::RotationCommandUtils::RotationData> const& rotationData,
    int                                                          commandVersion
);

MCAPI ::Vec3 getFacingDirectionFacingEntity(::Actor const& faceEntity);

MCAPI ::Vec3
getFacingDirectionFacingPosition(int version, ::CommandOrigin const& origin, ::CommandPositionFloat facingPos);
// NOLINTEND

} // namespace RotationCommandUtils
