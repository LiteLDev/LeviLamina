#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockUtils {

public:
    // prevent constructor by default
    BlockUtils& operator=(BlockUtils const&) = delete;
    BlockUtils(BlockUtils const&)            = delete;
    BlockUtils()                             = delete;

public:
    /**
     * @symbol ?allowsNetherVegetation\@BlockUtils\@\@SA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool allowsNetherVegetation(class BlockLegacy const&); // NOLINT
    /**
     * @symbol ?canGrowTreeWithBeehive\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool canGrowTreeWithBeehive(class Block const&); // NOLINT
    /**
     * @symbol ?getLiquidBlockHeight\@BlockUtils\@\@SAMAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static float getLiquidBlockHeight(class Block const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isBeehiveBlock\@BlockUtils\@\@SA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool isBeehiveBlock(class BlockLegacy const&); // NOLINT
    /**
     * @symbol ?isDownwardFlowingLiquid\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isDownwardFlowingLiquid(class Block const&); // NOLINT
    /**
     * @symbol ?isFullFlowingLiquid\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isFullFlowingLiquid(class Block const&); // NOLINT
    /**
     * @symbol ?isLiquidSource\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isLiquidSource(class Block const&); // NOLINT
    /**
     * @symbol ?isThinFenceOrWallBlock\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isThinFenceOrWallBlock(class Block const&); // NOLINT
    /**
     * @symbol ?isWaterSource\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isWaterSource(class Block const&); // NOLINT
};
