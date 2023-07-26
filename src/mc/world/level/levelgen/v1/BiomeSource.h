#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeSource {

public:
    // prevent constructor by default
    BiomeSource& operator=(BiomeSource const&) = delete;
    BiomeSource(BiomeSource const&)            = delete;
    BiomeSource()                              = delete;
};
