#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UpdateWaterStateFlowRequest : uchar {
    NoFlowUnlessMarkedForFlow = 0,
    ForceNoFlow = 1,
    DoFlow = 2,
};
