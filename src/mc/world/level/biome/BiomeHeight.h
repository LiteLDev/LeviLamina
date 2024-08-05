#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeHeight {
public:
    // prevent constructor by default
    BiomeHeight& operator=(BiomeHeight const&);
    BiomeHeight(BiomeHeight const&);
    BiomeHeight();

public:
    // NOLINTBEGIN
    MCAPI static float const MIN_DEPTH;

    // NOLINTEND
};
