#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
struct TickingSystemWithInfo;
// clang-format on

namespace CameraInputTransformSystem {
// functions
// NOLINTBEGIN
MCNAPI float _getWorldYawDeg(::Vec2 const& orientation);

MCNAPI float _getWorldYawDeg(::Vec3 const& orientation);

MCNAPI ::TickingSystemWithInfo create();
// NOLINTEND

} // namespace CameraInputTransformSystem
