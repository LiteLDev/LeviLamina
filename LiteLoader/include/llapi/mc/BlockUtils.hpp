/**
 * @file  MC/BlockUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockUtils.
 *
 */
class BlockUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUTILS
public:
    class BlockUtils& operator=(class BlockUtils const &) = delete;
    BlockUtils(class BlockUtils const &) = delete;
    BlockUtils() = delete;
#endif

public:
    /**
     * @hash   637354109
     * @symbol ?allowsNetherVegetation@BlockUtils@@SA_NAEBVBlockLegacy@@@Z
     */
    MCAPI static bool allowsNetherVegetation(class BlockLegacy const &);
    /**
     * @hash   416360553
     * @symbol ?canGrowTreeWithBeehive@BlockUtils@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool canGrowTreeWithBeehive(class Block const &);
    /**
     * @hash   1439520936
     * @symbol ?getLiquidBlockHeight@BlockUtils@@SAMAEBVBlock@@AEBVBlockPos@@@Z
     */
    MCAPI static float getLiquidBlockHeight(class Block const &, class BlockPos const &);
    /**
     * @hash   157863171
     * @symbol ?isBeehiveBlock@BlockUtils@@SA_NAEBVBlockLegacy@@@Z
     */
    MCAPI static bool isBeehiveBlock(class BlockLegacy const &);
    /**
     * @hash   821502957
     * @symbol ?isDownwardFlowingLiquid@BlockUtils@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isDownwardFlowingLiquid(class Block const &);
    /**
     * @hash   -95786273
     * @symbol ?isFullFlowingLiquid@BlockUtils@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isFullFlowingLiquid(class Block const &);
    /**
     * @hash   -1525507507
     * @symbol ?isLiquidSource@BlockUtils@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isLiquidSource(class Block const &);
    /**
     * @hash   -524114181
     * @symbol ?isThinFenceOrWallBlock@BlockUtils@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isThinFenceOrWallBlock(class Block const &);
    /**
     * @hash   292003421
     * @symbol ?isWaterSource@BlockUtils@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isWaterSource(class Block const &);

};