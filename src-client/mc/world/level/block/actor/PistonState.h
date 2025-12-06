#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PistonState : schar {
    Retracted  = 0,
    Expanding  = 1,
    Expanded   = 2,
    Retracting = 3,
};
