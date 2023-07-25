#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICK
public:
    Tick& operator=(Tick const&) = delete;
    Tick(Tick const&)            = delete;
    Tick()                       = delete;
#endif

public:
    /**
     * @symbol ?MAX\@Tick\@\@2U1\@B
     */
    MCAPI static struct Tick const MAX;
};
