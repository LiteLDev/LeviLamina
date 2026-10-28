#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
struct MaxAutoStepComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace AutoStepSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI ::AABB
getMaxCollisionVolume(::Vec3 const& preMoveSpeed, ::MaxAutoStepComponent const& step, ::AABB const& preMoveShape);
// NOLINTEND

} // namespace AutoStepSystem
