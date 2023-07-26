#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeNoiseTarget {

public:
    // prevent constructor by default
    BiomeNoiseTarget& operator=(BiomeNoiseTarget const&) = delete;
    BiomeNoiseTarget(BiomeNoiseTarget const&)            = delete;
    BiomeNoiseTarget()                                   = delete;
};
