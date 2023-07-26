#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientTerrainPixel {

public:
    // prevent constructor by default
    ClientTerrainPixel& operator=(ClientTerrainPixel const&) = delete;
    ClientTerrainPixel(ClientTerrainPixel const&)            = delete;
    ClientTerrainPixel()                                     = delete;
};
