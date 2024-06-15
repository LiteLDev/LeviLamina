#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureHelper {
// NOLINTBEGIN
// symbol: ?isEmptyBlock@FeatureHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

// symbol:
// ?makeFeatureRenderParams@FeatureHelper@@YA?AVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@AEAVMolangVariableMap@@@Z
MCAPI class RenderParams
makeFeatureRenderParams(class BlockSource& source, class BlockPos const& pos, class MolangVariableMap& molangVariables);

// symbol:
// ?passesAllowList@FeatureHelper@@YA_NAEBVBlock@@AEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
MCAPI bool passesAllowList(class Block const& block, std::vector<class BlockDescriptor> const& allowList);

// symbol:
// ?passesAllowList@FeatureHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
MCAPI bool passesAllowList(
    class IBlockWorldGenAPI const&            target,
    class BlockPos const&                     pos,
    std::vector<class BlockDescriptor> const& allowList
);

// symbol:
// ?placeBlock@FeatureHelper@@YA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@@Z
MCAPI std::optional<class BlockPos>
      placeBlock(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block);
// NOLINTEND

}; // namespace FeatureHelper
