#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
// clang-format on

namespace TreeHelper {
// functions
// NOLINTBEGIN
MCNAPI bool isValidTreePosition(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCNAPI ::std::optional<::BlockPos>
placeRadialBlockGroup(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& block, ::Block const& radius, int coreWidth, int simplify, bool mayGrowThrough, ::std::vector<::BlockDescriptor> const&);

MCNAPI bool prepareSpawn(
    ::IBlockWorldGenAPI const&              target,
    ::BlockPos const&                       pos,
    int                                     treeHeight,
    ::std::vector<::BlockDescriptor> const& mayGrowOn,
    ::std::vector<::BlockDescriptor> const& mayGrowThrough
);
// NOLINTEND

} // namespace TreeHelper
