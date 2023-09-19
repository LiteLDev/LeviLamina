#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientTerrainPixel {
public:
    // prevent constructor by default
    ClientTerrainPixel& operator=(ClientTerrainPixel const&);
    ClientTerrainPixel(ClientTerrainPixel const&);
    ClientTerrainPixel();
};
