#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TerrainInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TERRAININFO
public:
    TerrainInfo& operator=(TerrainInfo const&) = delete;
    TerrainInfo(TerrainInfo const&)            = delete;
    TerrainInfo()                              = delete;
#endif

public:
};
