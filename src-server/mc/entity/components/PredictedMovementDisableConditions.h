#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PredictedMovementDisableConditions : uchar {
    IsClientPredicted = 0,
    FeatureToggleDisabled = 1,
    Count = 2,
};
