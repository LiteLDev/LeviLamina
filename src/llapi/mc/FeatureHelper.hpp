/**
 * @file  FeatureHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace FeatureHelper.
 *
 */
namespace FeatureHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?isEmptyBlock\@FeatureHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @symbol  ?makeFeatureRenderParams\@FeatureHelper\@\@YA?AVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAVMolangVariableMap\@\@\@Z
     */
    MCAPI class RenderParams makeFeatureRenderParams(class BlockSource &, class BlockPos const &, class MolangVariableMap &);
    /**
     * @symbol  ?passesAllowList\@FeatureHelper\@\@YA_NAEBVBlock\@\@AEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool passesAllowList(class Block const &, std::vector<class BlockDescriptor> const &);
    /**
     * @symbol  ?passesAllowList\@FeatureHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool passesAllowList(class IBlockWorldGenAPI const &, class BlockPos const &, std::vector<class BlockDescriptor> const &);
    /**
     * @symbol  ?placeBlock\@FeatureHelper\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos> placeBlock(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &);

};