#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerPlayerBlockUseHandler {

enum class PredictionValidationError : uchar {
    None                           = 0,
    ClientPredictionMissing        = 1 << 0,
    ClientBlockPredictionIncorrect = 1 << 1,
    ClientItemPredictionBadSource  = 1 << 3,
    ClientItemPredictionBadResult  = 1 << 4,
    RejectItemPrediction           = 1 << 5,
};

};
