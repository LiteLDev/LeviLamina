#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
class Vec3;
struct Tick;
namespace RandomSwimUtility { struct SwimHeightBounds; }
// clang-format on

namespace RandomSwimUtility {
// functions
// NOLINTBEGIN
MCNAPI void beginRandomSwim(
    ::Mob&  mob,
    ::Vec3& randomSwimTarget,
    ::Vec3& randomSwimLastPosition,
    ::Tick& randomSwimNoProgressTicks,
    int     searchRadius,
    bool    avoidSurface,
    float   yawPerTick
);

MCNAPI float computeBaseUnderwaterStepPerTick(::Mob const& mob, float defaultStepPerTick);

MCNAPI ::RandomSwimUtility::SwimHeightBounds
computeSwimHeightBounds(::BlockSource const& region, float mobPosY, ::BlockPos const& anchorPosIn, int yRangeLimit);

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

MCNAPI ::std::optional<::Vec3>
trySelectRandomSwimTarget(::Mob& mob, int searchRadius, bool avoidSurface, int maxAttempts);

MCNAPI bool turnBodyYawTowards(::Mob& mob, ::Vec3 const& toTarget, float maxDeltaDegrees);

MCNAPI bool
validateSwimTarget(::BlockSource const& region, ::Mob const& mob, ::Vec3 const& targetWorldPos, bool avoidSurface);
// NOLINTEND

} // namespace RandomSwimUtility
