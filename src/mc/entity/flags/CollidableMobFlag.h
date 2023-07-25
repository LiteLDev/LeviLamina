#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollidableMobFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLIDABLEMOBFLAG
public:
    CollidableMobFlag& operator=(CollidableMobFlag const&) = delete;
    CollidableMobFlag(CollidableMobFlag const&)            = delete;
    CollidableMobFlag()                                    = delete;
#endif

public:
};
