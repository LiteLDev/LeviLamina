#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct InsideBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mInsideBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mInsideBlockPos;
    // NOLINTEND
};
