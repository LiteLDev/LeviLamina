#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CorrectionMethod : uchar {
    None          = 0,
    AcceptClient  = 1,
    CorrectClient = 2,
};
