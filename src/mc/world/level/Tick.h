#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {

public:
    // prevent constructor by default
    Tick& operator=(Tick const&) = delete;
    Tick(Tick const&)            = delete;
    Tick()                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?MAX\@Tick\@\@2U1\@B
     */
    MCAPI static struct Tick const MAX;
    // NOLINTEND
};
