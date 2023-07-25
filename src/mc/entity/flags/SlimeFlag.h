#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlimeFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEFLAG
public:
    SlimeFlag& operator=(SlimeFlag const&) = delete;
    SlimeFlag(SlimeFlag const&)            = delete;
    SlimeFlag()                            = delete;
#endif

public:
};
