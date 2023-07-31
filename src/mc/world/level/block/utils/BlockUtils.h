#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockUtils {

public:
    // prevent constructor by default
    BlockUtils& operator=(BlockUtils const&) = delete;
    BlockUtils(BlockUtils const&)            = delete;
    BlockUtils()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?allowsNetherVegetation\@BlockUtils\@\@SA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool allowsNetherVegetation(class BlockLegacy const&);
    /**
     * @symbol ?canGrowTreeWithBeehive\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool canGrowTreeWithBeehive(class Block const&);
    /**
     * @symbol ?getLiquidBlockHeight\@BlockUtils\@\@SAMAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static float getLiquidBlockHeight(class Block const&, class BlockPos const&);
    /**
     * @symbol ?isBeehiveBlock\@BlockUtils\@\@SA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool isBeehiveBlock(class BlockLegacy const&);
    /**
     * @symbol ?isDownwardFlowingLiquid\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isDownwardFlowingLiquid(class Block const&);
    /**
     * @symbol ?isFullFlowingLiquid\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isFullFlowingLiquid(class Block const&);
    /**
     * @symbol ?isLiquidSource\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isLiquidSource(class Block const&);
    /**
     * @symbol ?isThinFenceOrWallBlock\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isThinFenceOrWallBlock(class Block const&);
    /**
     * @symbol ?isWaterSource\@BlockUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isWaterSource(class Block const&);
    // NOLINTEND
};
