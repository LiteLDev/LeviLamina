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
MCAPI bool isValidTreePosition(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

MCAPI bool isValidTreePosition(
    class IBlockWorldGenAPI const&       target,
    class BlockPos const&                pos,
    struct TreeHelper::TreeParams const& treeParams
);

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

MCAPI bool prepareSpawn(
    class IBlockWorldGenAPI const&            target,
    class BlockPos const&                     pos,
    int                                       treeHeight,
    std::vector<class BlockDescriptor> const& mayGrowOn,
    std::vector<class BlockDescriptor> const& mayGrowThrough
);
// NOLINTEND

}; // namespace TreeHelper
