#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MovePredictionType : int {
    FromMoveToMoveInterpolation     = 0,
    FromMoveToMotionInterpolation   = 1,
    FromMotionToMoveInterpolation   = 2,
    FromMotionToMotionInterpolation = 3,
    Extrapolation                   = 4,
    NotEnoughHistory                = 5,
    NoPrediction                    = 6,
    Max                             = 7,
};
