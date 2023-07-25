#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOATFLAG
public:
    BoatFlag& operator=(BoatFlag const&) = delete;
    BoatFlag(BoatFlag const&)            = delete;
    BoatFlag()                           = delete;
#endif

public:
};
