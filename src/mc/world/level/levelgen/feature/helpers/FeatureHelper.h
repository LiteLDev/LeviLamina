#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
class MolangVariableMap;
class RenderParams;
// clang-format on

namespace FeatureHelper {
// functions
// NOLINTBEGIN
MCAPI bool isEmptyBlock(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI ::gsl::not_null<::Block const*> makeCompareBlock(::Block const& block);

MCAPI ::RenderParams
makeFeatureRenderParams(::BlockSource& source, ::BlockPos const& pos, ::MolangVariableMap& molangVariables);

MCAPI bool passesAllowList(
    ::IBlockWorldGenAPI const&              target,
    ::BlockPos const&                       pos,
    ::std::vector<::BlockDescriptor> const& allowList
);

MCAPI ::std::optional<::BlockPos> placeBlock(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block);
// NOLINTEND

} // namespace FeatureHelper
