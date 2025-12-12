#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
namespace TreeHelper { struct TreeParams; }
// clang-format on

namespace TreeHelper {
// functions
// NOLINTBEGIN
MCNAPI bool isValidTreePosition(
    ::IBlockWorldGenAPI const&      target,
    ::BlockPos const&               pos,
    ::TreeHelper::TreeParams const& treeParams
);

MCNAPI ::std::optional<::BlockPos> placeBaseBlock(
    ::IBlockWorldGenAPI&                    target,
    ::BlockPos const&                       pos,
    ::std::vector<::BlockDescriptor> const& validBaseBlocks
);

MCNAPI ::std::optional<::BlockPos> placeRadialBlockGroup(
    ::IBlockWorldGenAPI& target,
    ::BlockPos const&    pos,
    ::Random&,
    ::Block const&                          block,
    int                                     radius,
    int                                     coreWidth,
    bool                                    simplify,
    ::std::vector<::BlockDescriptor> const& mayGrowThrough
);

MCNAPI bool prepareSpawn(
    ::IBlockWorldGenAPI const&              target,
    ::BlockPos const&                       pos,
    int                                     treeHeight,
    ::std::vector<::BlockDescriptor> const& mayGrowOn,
    ::std::vector<::BlockDescriptor> const& mayGrowThrough
);
// NOLINTEND

} // namespace TreeHelper
