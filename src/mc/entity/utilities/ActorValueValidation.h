#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorValueValidation {
// NOLINTBEGIN
// symbol: ?_fireTelemetryEvent@ActorValueValidation@@YAXAEBVBlockPos@@PEBD@Z
MCAPI void _fireTelemetryEvent(class BlockPos const&, char const*);

// symbol: ?_fireTelemetryEvent@ActorValueValidation@@YAXAEBVVec3@@PEBD@Z
MCAPI void _fireTelemetryEvent(class Vec3 const&, char const*);

// symbol:
// ?_fireTelemetryEvent@ActorValueValidation@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
MCAPI void _fireTelemetryEvent(std::string const&, char const*);

// symbol: ?isLegalPlayerPosition@ActorValueValidation@@YA_NAEBVVec3@@PEBD@Z
MCAPI bool isLegalPlayerPosition(class Vec3 const& pos, char const*);

// symbol: ?validateBlockPos@ActorValueValidation@@YA_NAEBVBlockPos@@PEBD@Z
MCAPI bool validateBlockPos(class BlockPos const& blockPos, char const*);

// symbol: ?validateHeadRotationFloatValue@ActorValueValidation@@YA_NMPEBD@Z
MCAPI bool validateHeadRotationFloatValue(float, char const*);

// symbol: ?validateVec2Position@ActorValueValidation@@YA_NAEBVVec2@@PEBD@Z
MCAPI bool validateVec2Position(class Vec2 const& pos, char const*);

// symbol: ?validateVec3Position@ActorValueValidation@@YA_NAEBVVec3@@PEBD@Z
MCAPI bool validateVec3Position(class Vec3 const& pos, char const*);
// NOLINTEND

}; // namespace ActorValueValidation
