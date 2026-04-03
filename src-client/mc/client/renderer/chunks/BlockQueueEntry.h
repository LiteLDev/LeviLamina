#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockQueueEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    pos;
    ::ll::TypedStorage<8, 8, ::Block const&> blockInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueueEntry& operator=(BlockQueueEntry const&);
    BlockQueueEntry(BlockQueueEntry const&);
    BlockQueueEntry();
};
