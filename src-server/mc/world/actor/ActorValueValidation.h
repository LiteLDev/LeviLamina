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
MCNAPI void _fireTelemetryEvent(::BlockPos const& invalidBlockPos, char const* caller);

MCNAPI void _fireTelemetryEvent(::Vec3 const& invalidPos, char const* caller);

MCNAPI bool validateHeadRotationFloatValue(float value, char const* caller);

MCNAPI bool validateVec2Position(::Vec2 const& pos, char const* caller);

MCNAPI bool validateVec3Position(::Vec3 const& pos, char const* caller);
// NOLINTEND

} // namespace ActorValueValidation
