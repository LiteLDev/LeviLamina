#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeSurfaceMaterialData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTopBlock;
    ::ll::TypedStorage<4, 4, uint> mMidBlock;
    ::ll::TypedStorage<4, 4, uint> mSeaFloorBlock;
    ::ll::TypedStorage<4, 4, uint> mFoundationBlock;
    ::ll::TypedStorage<4, 4, uint> mSeaBlock;
    ::ll::TypedStorage<4, 4, int>  mSeaFloorDepth;
    // NOLINTEND
};
