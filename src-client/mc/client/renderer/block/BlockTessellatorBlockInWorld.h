#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockTessellatorBlockInWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>     block;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer> layer;
    ::ll::TypedStorage<4, 12, ::BlockPos>        pos;
    ::ll::TypedStorage<8, 8, void const*>        owner;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTessellatorBlockInWorld& operator=(BlockTessellatorBlockInWorld const&);
    BlockTessellatorBlockInWorld(BlockTessellatorBlockInWorld const&);
    BlockTessellatorBlockInWorld();
};
