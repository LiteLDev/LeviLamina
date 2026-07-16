#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
struct Tick;
// clang-format on

namespace RandomSwimUtility {
// functions
// NOLINTBEGIN
MCNAPI void applyStep(
    ::Mob&        mob,
    ::Vec3 const& moveDirection,
    ::Vec3 const& desiredStepDelta,
    float         yawTurnDegreesPerTick,
    float         correctionEpsilonSquared
);

MCNAPI float computeBaseUnderwaterStepPerTick(::Mob const& mob, float defaultStepPerTick);

MCNAPI void randomSwimTick(
    ::Mob&  mob,
    ::Vec3& randomSwimTarget,
    ::Vec3& randomSwimLastPosition,
    ::Tick& randomSwimNoProgressTicks,
    float   baseStepPerTick,
    float   minStepLength,
    float   yawPerTick,
    int     searchRadius,
    bool    avoidSurface
);
// NOLINTEND

} // namespace RandomSwimUtility
