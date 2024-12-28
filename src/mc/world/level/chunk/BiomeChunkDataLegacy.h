#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeChunkDataLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2f4216;
    ::ll::UntypedStorage<1, 1> mUnkb5c63e;
    ::ll::UntypedStorage<1, 1> mUnk9eeb97;
    ::ll::UntypedStorage<1, 1> mUnka3199a;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeChunkDataLegacy& operator=(BiomeChunkDataLegacy const&);
    BiomeChunkDataLegacy(BiomeChunkDataLegacy const&);
    BiomeChunkDataLegacy();
};
