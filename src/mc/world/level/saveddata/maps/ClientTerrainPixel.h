#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientTerrainPixel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd92530;
    ::ll::UntypedStorage<1, 1> mUnk5ad246;
    ::ll::UntypedStorage<1, 1> mUnke2c602;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientTerrainPixel& operator=(ClientTerrainPixel const&);
    ClientTerrainPixel(ClientTerrainPixel const&);
    ClientTerrainPixel();
};
