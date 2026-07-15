#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec2;
namespace RotationCommandUtils { class RotationData; }
// clang-format on

namespace RotationCommandUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Vec2 ComputeRotation(
    ::Actor const&                                               victim,
    ::std::optional<::RotationCommandUtils::RotationData> const& rotationData,
    int                                                          commandVersion
);
// NOLINTEND

} // namespace RotationCommandUtils
