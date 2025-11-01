#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TerrainInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2e6893;
    ::ll::UntypedStorage<4, 4> mUnk14adcf;
    ::ll::UntypedStorage<4, 4> mUnk9d38c2;
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainInfo& operator=(TerrainInfo const&);
    TerrainInfo(TerrainInfo const&);
    TerrainInfo();
};
