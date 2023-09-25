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
     * @symbol ?isEmptyBlock\@FeatureHelper\@\@YA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @symbol ?makeFeatureRenderParams\@FeatureHelper\@\@YA?AVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAVMolangVariableMap\@\@\@Z
     */
    MCAPI class RenderParams makeFeatureRenderParams(class BlockSource &, class BlockPos const &, class MolangVariableMap &);
    /**
     * @symbol ?placeBlock\@FeatureHelper\@\@YA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos> placeBlock(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &);

};