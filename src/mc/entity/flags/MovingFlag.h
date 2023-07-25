#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovingFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVINGFLAG
public:
    MovingFlag& operator=(MovingFlag const&) = delete;
    MovingFlag(MovingFlag const&)            = delete;
    MovingFlag()                             = delete;
#endif

public:
};
