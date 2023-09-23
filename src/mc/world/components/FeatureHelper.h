#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureHelper {
// NOLINTBEGIN
// symbol: ?isEmptyBlock@FeatureHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const&, class BlockPos const&);

// symbol:
// ?makeFeatureRenderParams@FeatureHelper@@YA?AVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@AEAVMolangVariableMap@@@Z
MCAPI class RenderParams makeFeatureRenderParams(class BlockSource&, class BlockPos const&, class MolangVariableMap&);

// symbol:
// ?placeBlock@FeatureHelper@@YA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@@Z
MCAPI std::optional<class BlockPos> placeBlock(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&);
// NOLINTEND

}; // namespace FeatureHelper
