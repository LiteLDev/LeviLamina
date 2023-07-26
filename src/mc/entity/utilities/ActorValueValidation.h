#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorValueValidation {
/**
 * @symbol ?_fireTelemetryEvent\@ActorValueValidation\@\@YAXAEBVVec3\@\@PEBD\@Z
 */
MCAPI void _fireTelemetryEvent(class Vec3 const&, char const*); // NOLINT
/**
 * @symbol ?_fireTelemetryEvent\@ActorValueValidation\@\@YAXAEBVBlockPos\@\@PEBD\@Z
 */
MCAPI void _fireTelemetryEvent(class BlockPos const&, char const*); // NOLINT
/**
 * @symbol
 * ?_fireTelemetryEvent\@ActorValueValidation\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
 */
MCAPI void _fireTelemetryEvent(std::string const&, char const*); // NOLINT
/**
 * @symbol ?isLegalPlayerPosition\@ActorValueValidation\@\@YA_NAEBVVec3\@\@PEBD\@Z
 */
MCAPI bool isLegalPlayerPosition(class Vec3 const&, char const*); // NOLINT
/**
 * @symbol ?validateBlockPos\@ActorValueValidation\@\@YA_NAEBVBlockPos\@\@PEBD\@Z
 */
MCAPI bool validateBlockPos(class BlockPos const&, char const*); // NOLINT
/**
 * @symbol ?validateFloatValue\@ActorValueValidation\@\@YA_NMPEBD\@Z
 */
MCAPI bool validateFloatValue(float, char const*); // NOLINT
/**
 * @symbol ?validateVec2Position\@ActorValueValidation\@\@YA_NAEBVVec2\@\@PEBD\@Z
 */
MCAPI bool validateVec2Position(class Vec2 const&, char const*); // NOLINT
/**
 * @symbol ?validateVec3Position\@ActorValueValidation\@\@YA_NAEBVVec3\@\@PEBD\@Z
 */
MCAPI bool validateVec3Position(class Vec3 const&, char const*); // NOLINT

}; // namespace ActorValueValidation
