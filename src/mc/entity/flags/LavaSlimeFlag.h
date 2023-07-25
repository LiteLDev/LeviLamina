#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LavaSlimeFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVASLIMEFLAG
public:
    LavaSlimeFlag& operator=(LavaSlimeFlag const&) = delete;
    LavaSlimeFlag(LavaSlimeFlag const&)            = delete;
    LavaSlimeFlag()                                = delete;
#endif

public:
};
