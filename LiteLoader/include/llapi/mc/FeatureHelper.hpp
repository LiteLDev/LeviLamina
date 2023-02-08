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
     * @hash   -197980533
     * @symbol  ?isEmptyBlock\@FeatureHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @hash   -1993507964
     * @symbol  ?makeFeatureRenderParams\@FeatureHelper\@\@YA?AVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAVMolangVariableMap\@\@\@Z
     */
    MCAPI class RenderParams makeFeatureRenderParams(class BlockSource &, class BlockPos const &, class MolangVariableMap &);
    /**
     * @hash   -344971425
     * @symbol  ?passesAllowList\@FeatureHelper\@\@YA_NAEBVBlock\@\@AEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool passesAllowList(class Block const &, std::vector<class BlockDescriptor> const &);
    /**
     * @hash   1762552282
     * @symbol  ?passesAllowList\@FeatureHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool passesAllowList(class IBlockWorldGenAPI const &, class BlockPos const &, std::vector<class BlockDescriptor> const &);
    /**
     * @hash   276470197
     * @symbol  ?placeBlock\@FeatureHelper\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos> placeBlock(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &);

};