#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeChunkDataLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> biome;
    ::ll::TypedStorage<1, 1, uchar> r;
    ::ll::TypedStorage<1, 1, uchar> g;
    ::ll::TypedStorage<1, 1, uchar> b;
    // NOLINTEND

};
