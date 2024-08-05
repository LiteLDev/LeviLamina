#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorValueValidation {
// NOLINTBEGIN
MCAPI void _fireTelemetryEvent(class BlockPos const&, char const*);

MCAPI void _fireTelemetryEvent(class Vec3 const&, char const*);

MCAPI void _fireTelemetryEvent(std::string const&, char const*);

MCAPI bool isLegalPlayerPosition(class Vec3 const& pos, char const*);

MCAPI bool validateBlockPos(class BlockPos const& blockPos, char const*);

MCAPI bool validateHeadRotationFloatValue(float, char const*);

MCAPI bool validateVec2Position(class Vec2 const& pos, char const*);

MCAPI bool validateVec3Position(class Vec3 const& pos, char const*);
// NOLINTEND

}; // namespace ActorValueValidation
