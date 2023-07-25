#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementCorrection {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTCORRECTION
public:
    MovementCorrection& operator=(MovementCorrection const&) = delete;
    MovementCorrection(MovementCorrection const&)            = delete;
    MovementCorrection()                                     = delete;
#endif

public:
};
