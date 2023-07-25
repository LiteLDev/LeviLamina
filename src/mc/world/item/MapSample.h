#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MapSample {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPSAMPLE
public:
    MapSample& operator=(MapSample const&) = delete;
    MapSample(MapSample const&)            = delete;
    MapSample()                            = delete;
#endif

public:
};
