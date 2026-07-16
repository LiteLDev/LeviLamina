#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
struct AABBShapeComponent;
struct MaxAutoStepComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace SneakMovementSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo create();

MCAPI ::AABB
getMaxCollisionVolume(::Vec3 const& speed, ::MaxAutoStepComponent const& step, ::AABBShapeComponent const& shape);
// NOLINTEND

} // namespace SneakMovementSystem
