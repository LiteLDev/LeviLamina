#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MovementAttributeCorrectionMode : uchar {
    RewindIfDifferentPreservePrediction = 0,
    NoRewindNoPrediction                = 1,
};
