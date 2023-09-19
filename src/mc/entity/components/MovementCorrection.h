#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementCorrection {
public:
    // prevent constructor by default
    MovementCorrection& operator=(MovementCorrection const&);
    MovementCorrection(MovementCorrection const&);
    MovementCorrection();
};
