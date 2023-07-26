#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureHelper {
/**
 * @symbol ?isEmptyBlock\@FeatureHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const&, class BlockPos const&); // NOLINT
/**
 * @symbol
 * ?makeFeatureRenderParams\@FeatureHelper\@\@YA?AVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAVMolangVariableMap\@\@\@Z
 */
MCAPI class RenderParams
makeFeatureRenderParams(class BlockSource&, class BlockPos const&, class MolangVariableMap&); // NOLINT
/**
 * @symbol
 * ?passesAllowList\@FeatureHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI bool
passesAllowList(class IBlockWorldGenAPI const&, class BlockPos const&, std::vector<class BlockDescriptor> const&); // NOLINT
/**
 * @symbol
 * ?passesAllowList\@FeatureHelper\@\@YA_NAEBVBlock\@\@AEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI bool passesAllowList(class Block const&, std::vector<class BlockDescriptor> const&); // NOLINT
/**
 * @symbol
 * ?placeBlock\@FeatureHelper\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
 */
MCAPI class std::optional<class BlockPos>
placeBlock(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&); // NOLINT

}; // namespace FeatureHelper
