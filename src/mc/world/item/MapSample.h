#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MapSample {
public:
    // prevent constructor by default
    MapSample& operator=(MapSample const&);
    MapSample(MapSample const&);
    MapSample();
};
