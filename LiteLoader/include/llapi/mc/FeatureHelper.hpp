/**
 * @file  FeatureHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1055546181
     * @symbol ?isEmptyBlock@FeatureHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
     */
    MCAPI bool isEmptyBlock(class IBlockWorldGenAPI const &, class BlockPos const &);
    /**
     * @hash   1443893684
     * @symbol ?makeFeatureRenderParams@FeatureHelper@@YA?AVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@AEAVMolangVariableMap@@@Z
     */
    MCAPI class RenderParams makeFeatureRenderParams(class BlockSource &, class BlockPos const &, class MolangVariableMap &);
    /**
     * @hash   -1202567825
     * @symbol ?passesAllowList@FeatureHelper@@YA_NAEBVBlock@@AEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
     */
    MCAPI bool passesAllowList(class Block const &, std::vector<class BlockDescriptor> const &);
    /**
     * @hash   904955882
     * @symbol ?passesAllowList@FeatureHelper@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
     */
    MCAPI bool passesAllowList(class IBlockWorldGenAPI const &, class BlockPos const &, std::vector<class BlockDescriptor> const &);
    /**
     * @hash   -581141579
     * @symbol ?placeBlock@FeatureHelper@@YA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI class std::optional<class BlockPos> placeBlock(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &);

};