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
// ?placeBlock@FeatureHelper@@YA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@@Z
MCAPI std::optional<class BlockPos>
      placeBlock(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block);
// NOLINTEND

}; // namespace FeatureHelper
