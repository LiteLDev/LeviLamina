#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec2;
class Vec3;
// clang-format on

namespace ActorValueValidation {
// functions
// NOLINTBEGIN
MCAPI void _fireTelemetryEvent(::BlockPos const& invalidBlockPos, char const* caller);

MCAPI void _fireTelemetryEvent(::Vec3 const& invalidPos, char const* caller);

MCAPI bool validateHeadRotationFloatValue(float value, char const* caller);

MCAPI bool validateVec2Position(::Vec2 const& pos, char const* caller);

MCAPI bool validateVec3Position(::Vec3 const& pos, char const* caller);

MCAPI bool validateVec3Velocity(::Vec3 const& posDelta, char const* caller);
// NOLINTEND

} // namespace ActorValueValidation
