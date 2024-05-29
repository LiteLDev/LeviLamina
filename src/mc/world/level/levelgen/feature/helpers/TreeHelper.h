#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

namespace TreeHelper {
// NOLINTBEGIN
// symbol: ?isValidTreePosition@TreeHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool isValidTreePosition(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

// symbol: ?isValidTreePosition@TreeHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBUTreeParams@1@@Z
MCAPI bool isValidTreePosition(
    class IBlockWorldGenAPI const&       target,
    class BlockPos const&                pos,
    struct TreeHelper::TreeParams const& treeParams
);

// symbol:
// ?placeRadialBlockGroup@TreeHelper@@YA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEBVBlock@@HH_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@3@@Z
MCAPI std::optional<class BlockPos> placeRadialBlockGroup(
    class IBlockWorldGenAPI& target,
    class BlockPos const&    pos,
    class Random&,
    class Block const&                        block,
    int                                       radius,
    int                                       coreWidth,
    bool                                      simplify,
    std::vector<class BlockDescriptor> const& mayGrowThrough
);

// symbol:
// ?prepareSpawn@TreeHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@HAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@2@Z
MCAPI bool prepareSpawn(
    class IBlockWorldGenAPI const&            target,
    class BlockPos const&                     pos,
    int                                       treeHeight,
    std::vector<class BlockDescriptor> const& mayGrowOn,
    std::vector<class BlockDescriptor> const& mayGrowThrough
);
// NOLINTEND

}; // namespace TreeHelper
