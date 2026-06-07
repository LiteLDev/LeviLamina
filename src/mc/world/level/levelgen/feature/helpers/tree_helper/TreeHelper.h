#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
namespace TreeHelper { struct AttachableDecoration; }
namespace TreeHelper { struct TreeParams; }
// clang-format on

namespace TreeHelper {
// functions
// NOLINTBEGIN
MCAPI bool isValidTreePosition(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool isValidTreePosition(
    ::IBlockWorldGenAPI const&      target,
    ::BlockPos const&               pos,
    ::TreeHelper::TreeParams const& treeParams
);

MCAPI ::std::optional<::BlockPos> placeBaseBlock(
    ::IBlockWorldGenAPI&                    target,
    ::BlockPos const&                       pos,
    ::std::vector<::BlockDescriptor> const& validBaseBlocks
);

MCAPI ::std::optional<::BlockPos> placeDecoratedBlock(
    ::IBlockWorldGenAPI&                                     target,
    ::BlockPos const&                                        pos,
    ::Random&                                                random,
    ::Block const&                                           block,
    ::TreeHelper::AttachableDecoration const&                decoration,
    ::TreeHelper::AttachableDecoration::DirectionMask const& mask
);

MCAPI ::std::optional<::BlockPos> placeRadialBlockGroup(
    ::IBlockWorldGenAPI& target,
    ::BlockPos const&    pos,
    ::Random&,
    ::Block const&                          block,
    int                                     radius,
    ::ITreeCanopy::BranchSize&              branchSize,
    bool                                    simplify,
    ::std::vector<::BlockDescriptor> const& mayGrowThrough
);

MCAPI bool prepareSpawn(
    ::IBlockWorldGenAPI const&              target,
    ::BlockPos const&                       pos,
    int                                     treeHeight,
    ::std::vector<::BlockDescriptor> const& mayGrowOn,
    ::std::vector<::BlockDescriptor> const& mayGrowThrough
);
// NOLINTEND

} // namespace TreeHelper
