#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/MultiBlockPart.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockPart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mOffset;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_10::MultiBlockPart> mPartId;
    ::ll::TypedStorage<8, 8, ::Block const*>                          mPart;
    // NOLINTEND
};
