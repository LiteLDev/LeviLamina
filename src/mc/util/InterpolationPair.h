#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InterpolationPair {
public:
    // prevent constructor by default
    InterpolationPair& operator=(InterpolationPair const&);
    InterpolationPair(InterpolationPair const&);
    InterpolationPair();
};
