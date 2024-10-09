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
    MCAPI static bool allowsNetherVegetation(class BlockLegacy const& block);

    MCAPI static bool canGrowTreeWithBeehive(class Block const& block);

    MCAPI static float getLiquidBlockHeight(class Block const& block, class BlockPos const& blockPos);

    MCAPI static bool isBeehiveBlock(class BlockLegacy const& block);

    MCAPI static bool isDownwardFlowingLiquid(class Block const& block);

    MCAPI static bool isFullFlowingLiquid(class Block const& block);

    MCAPI static bool isLiquidSource(class Block const& block);

    MCAPI static bool isThinFenceOrWallBlock(class Block const& block);

    MCAPI static bool isWaterSource(class Block const& block);

    // NOLINTEND
};
