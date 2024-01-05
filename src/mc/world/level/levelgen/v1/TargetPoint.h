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
    MCAPI TargetPoint(float temperature, float, float, float, float depth, float);

    // NOLINTEND
};
