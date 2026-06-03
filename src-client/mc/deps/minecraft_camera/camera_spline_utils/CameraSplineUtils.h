#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Hermite3d; }
namespace CameraSplineUtils { struct Linear3d; }
// clang-format on

namespace CameraSplineUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::CameraSplineUtils::Hermite3d> catmullrom(::std::vector<::glm::vec3> points);

MCAPI ::std::optional<::CameraSplineUtils::Linear3d> linear(::std::vector<::glm::vec3> points);
// NOLINTEND

} // namespace CameraSplineUtils
