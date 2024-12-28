#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeChunkState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkddc32c;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeChunkState& operator=(BiomeChunkState const&);
    BiomeChunkState(BiomeChunkState const&);
    BiomeChunkState();
};
