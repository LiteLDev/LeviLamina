#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorValueValidation {
// NOLINTBEGIN
MCAPI void _fireTelemetryEvent(class BlockPos const& invalidBlockPos, char const* caller);

MCAPI void _fireTelemetryEvent(class Vec3 const& invalidPos, char const* caller);

MCAPI void _fireTelemetryEvent(std::string const& invalidValue, char const* caller);

MCAPI bool isLegalPlayerPosition(class Vec3 const& pos, char const* caller);

MCAPI bool validateBlockPos(class BlockPos const& blockPos, char const* caller);

MCAPI bool validateHeadRotationFloatValue(float value, char const* caller);

MCAPI bool validateVec2Position(class Vec2 const& pos, char const* caller);

MCAPI bool validateVec3Position(class Vec3 const& pos, char const* caller);
// NOLINTEND

}; // namespace ActorValueValidation
