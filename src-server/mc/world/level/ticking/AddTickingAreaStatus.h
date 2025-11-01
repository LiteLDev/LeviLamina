#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AddTickingAreaStatus : int {
    ExceededChunkLimit = 0,
    ExceededTickingAreaLimit = 1,
    ConflictingName = 2,
    UnknownDimension = 3,
    Success = 4,
    Undefined = 5,
};
