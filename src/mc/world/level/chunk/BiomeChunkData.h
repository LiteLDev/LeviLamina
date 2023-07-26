#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeChunkData {

public:
    // prevent constructor by default
    BiomeChunkData& operator=(BiomeChunkData const&) = delete;
    BiomeChunkData(BiomeChunkData const&)            = delete;
    BiomeChunkData()                                 = delete;
};
