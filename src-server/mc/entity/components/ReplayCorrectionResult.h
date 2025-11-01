#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ReplayCorrectionResult : int {
    NoCorrection           = 0,
    CorrectedWithRewind    = 1,
    CorrectedWithoutRewind = 2,
};
