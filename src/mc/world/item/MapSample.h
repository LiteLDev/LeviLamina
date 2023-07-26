#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MapSample {

public:
    // prevent constructor by default
    MapSample& operator=(MapSample const&) = delete;
    MapSample(MapSample const&)            = delete;
    MapSample()                            = delete;
};
