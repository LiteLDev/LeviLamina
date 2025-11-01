#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BounceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBounceStartPos;
    ::ll::TypedStorage<8, 8, ::Block const*> mBounceBlock;
    ::ll::TypedStorage<4, 4, int> mBounceHeight;
    // NOLINTEND

};
