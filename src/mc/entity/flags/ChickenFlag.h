#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChickenFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHICKENFLAG
public:
    ChickenFlag& operator=(ChickenFlag const&) = delete;
    ChickenFlag(ChickenFlag const&)            = delete;
    ChickenFlag()                              = delete;
#endif

public:
};
