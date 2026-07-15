#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
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

MCAPI bool prepareSpawn(
    ::IBlockWorldGenAPI const&              target,
    ::BlockPos const&                       pos,
    int                                     treeHeight,
    ::std::vector<::BlockDescriptor> const& mayGrowOn,
    ::std::vector<::BlockDescriptor> const& mayGrowThrough
);
// NOLINTEND

} // namespace TreeHelper
