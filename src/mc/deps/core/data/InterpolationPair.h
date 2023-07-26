#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InterpolationPair {

public:
    // prevent constructor by default
    InterpolationPair& operator=(InterpolationPair const&) = delete;
    InterpolationPair(InterpolationPair const&)            = delete;
    InterpolationPair()                                    = delete;
};
