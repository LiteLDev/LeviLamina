#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureHelper {
// NOLINTBEGIN
MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

MCAPI class RenderParams
makeFeatureRenderParams(class BlockSource& source, class BlockPos const& pos, class MolangVariableMap& molangVariables);

MCAPI bool passesAllowList(class Block const& block, std::vector<class BlockDescriptor> const& allowList);

MCAPI bool passesAllowList(
    class IBlockWorldGenAPI const&            target,
    class BlockPos const&                     pos,
    std::vector<class BlockDescriptor> const& allowList
);

MCAPI std::optional<class BlockPos>
      placeBlock(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block);
// NOLINTEND

}; // namespace FeatureHelper
