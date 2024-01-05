#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockUtils {
public:
    // prevent constructor by default
    BlockUtils& operator=(BlockUtils const&);
    BlockUtils(BlockUtils const&);
    BlockUtils();

public:
    // NOLINTBEGIN
    // symbol: ?allowsNetherVegetation@BlockUtils@@SA_NAEBVBlockLegacy@@@Z
    MCAPI static bool allowsNetherVegetation(class BlockLegacy const& block);

    // symbol: ?canGrowTreeWithBeehive@BlockUtils@@SA_NAEBVBlock@@@Z
    MCAPI static bool canGrowTreeWithBeehive(class Block const& block);

    // symbol: ?getLiquidBlockHeight@BlockUtils@@SAMAEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static float getLiquidBlockHeight(class Block const& block, class BlockPos const& blockPos);

    // symbol: ?isBeehiveBlock@BlockUtils@@SA_NAEBVBlockLegacy@@@Z
    MCAPI static bool isBeehiveBlock(class BlockLegacy const& block);

    // symbol: ?isDownwardFlowingLiquid@BlockUtils@@SA_NAEBVBlock@@@Z
    MCAPI static bool isDownwardFlowingLiquid(class Block const& block);

    // symbol: ?isFullFlowingLiquid@BlockUtils@@SA_NAEBVBlock@@@Z
    MCAPI static bool isFullFlowingLiquid(class Block const& block);

    // symbol: ?isLiquidSource@BlockUtils@@SA_NAEBVBlock@@@Z
    MCAPI static bool isLiquidSource(class Block const& block);

    // symbol: ?isThinFenceOrWallBlock@BlockUtils@@SA_NAEBVBlock@@@Z
    MCAPI static bool isThinFenceOrWallBlock(class Block const& block);

    // symbol: ?isWaterSource@BlockUtils@@SA_NAEBVBlock@@@Z
    MCAPI static bool isWaterSource(class Block const& block);

    // NOLINTEND
};
