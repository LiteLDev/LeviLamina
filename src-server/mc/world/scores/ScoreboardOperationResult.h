#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScoreboardOperationResult : uchar {
    Success = 0,
    IntegerOverflow = 1,
    ReadOnlyCriteria = 2,
    UnknownId = 3,
    UnknownOperator = 4,
};
