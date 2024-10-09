#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TerrainInfo {
public:
    // prevent constructor by default
    TerrainInfo& operator=(TerrainInfo const&);
    TerrainInfo(TerrainInfo const&);
    TerrainInfo();
};
