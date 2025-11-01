#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct SurfaceMaterialBlocks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mTop;
    ::ll::TypedStorage<8, 8, ::Block const*> mMid;
    ::ll::TypedStorage<8, 8, ::Block const*> mSeaFloor;
    ::ll::TypedStorage<8, 8, ::Block const*> mFoundation;
    ::ll::TypedStorage<8, 8, ::Block const*> mSea;
    ::ll::TypedStorage<4, 4, int> mSeaFloorDepth;
    // NOLINTEND

};
