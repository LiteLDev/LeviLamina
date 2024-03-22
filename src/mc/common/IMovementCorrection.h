#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IMovementCorrection {
public:
    // prevent constructor by default
    IMovementCorrection& operator=(IMovementCorrection const&);
    IMovementCorrection(IMovementCorrection const&);
    IMovementCorrection();
};
