#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetPoint {
public:
    // prevent constructor by default
    TargetPoint& operator=(TargetPoint const&);
    TargetPoint(TargetPoint const&);
    TargetPoint();

public:
    // NOLINTBEGIN
    // symbol: ??0TargetPoint@@QEAA@MMMMMM@Z
    MCAPI
    TargetPoint(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);

    // NOLINTEND
};
