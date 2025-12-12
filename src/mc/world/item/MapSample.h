#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MapSample {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk4665f2;
    ::ll::UntypedStorage<8, 8>  mUnkaf5351;
    ::ll::UntypedStorage<2, 2>  mUnkbd82f2;
    // NOLINTEND

public:
    // prevent constructor by default
    MapSample& operator=(MapSample const&);
    MapSample(MapSample const&);
    MapSample();
};
