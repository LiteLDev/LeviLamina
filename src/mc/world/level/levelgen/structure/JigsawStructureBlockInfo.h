#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

class JigsawStructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                   mBlock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mTag;
    // NOLINTEND
};
