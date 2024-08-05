#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Tick {
public:
    // prevent constructor by default
    Tick& operator=(Tick const&);
    Tick(Tick const&);
    Tick();

public:
    // NOLINTBEGIN
    MCAPI static struct Tick const MAX;

    // NOLINTEND
};
