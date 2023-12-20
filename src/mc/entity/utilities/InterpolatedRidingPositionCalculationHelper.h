#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InterpolatedRidingPositionCalculationHelper {
public:
    // prevent constructor by default
    InterpolatedRidingPositionCalculationHelper& operator=(InterpolatedRidingPositionCalculationHelper const&);
    InterpolatedRidingPositionCalculationHelper(InterpolatedRidingPositionCalculationHelper const&);
    InterpolatedRidingPositionCalculationHelper();

public:
    // NOLINTBEGIN
    // symbol: ?getCamelInterpolatedRidingOffset@InterpolatedRidingPositionCalculationHelper@@SA?AVVec3@@_N@Z
    MCAPI static class Vec3 getCamelInterpolatedRidingOffset(bool);

    // NOLINTEND
};
