#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct LiquidBlockEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPos;
    ::ll::TypedStorage<1, 1, uchar>          mEdgeFlags;
    // NOLINTEND
};
