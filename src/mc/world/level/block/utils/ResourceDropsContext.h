#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourceDropsContext {
public:
    // prevent constructor by default
    ResourceDropsContext& operator=(ResourceDropsContext const&);
    ResourceDropsContext(ResourceDropsContext const&);
    ResourceDropsContext();

public:
    // NOLINTBEGIN
    // symbol: ?getBlockActor@ResourceDropsContext@@QEBAPEBVBlockActor@@XZ
    MCAPI class BlockActor const* getBlockActor() const;

    // symbol: ?getLevel@ResourceDropsContext@@QEBAAEAVILevel@@XZ
    MCAPI class ILevel& getLevel() const;

    // symbol: ?getMiningLootBonusLevel@ResourceDropsContext@@QEBAHXZ
    MCAPI int getMiningLootBonusLevel() const;

    // symbol: ?getRandom@ResourceDropsContext@@QEBAAEAVRandom@@XZ
    MCAPI class Random& getRandom() const;

    // symbol: ?isUsingSilkTouch@ResourceDropsContext@@QEBA_NXZ
    MCAPI bool isUsingSilkTouch() const;

    // symbol: ?fromExplosion@ResourceDropsContext@@SA?AU1@AEBVIBlockSource@@MAEBVBlockPos@@@Z
    MCAPI static struct ResourceDropsContext fromExplosion(class IBlockSource const&, float, class BlockPos const&);

    // symbol: ?fromOtherCause@ResourceDropsContext@@SA?AU1@AEBVIBlockSource@@AEBVBlockPos@@@Z
    MCAPI static struct ResourceDropsContext fromOtherCause(class IBlockSource const&, class BlockPos const&);

    // symbol: ?fromPlayerMining@ResourceDropsContext@@SA?AU1@AEBVIBlockSource@@AEBVBlockPos@@AEBVItemStack@@@Z
    MCAPI static struct ResourceDropsContext
    fromPlayerMining(class IBlockSource const&, class BlockPos const&, class ItemStack const&);

    // symbol: ?fromProjectileHit@ResourceDropsContext@@SA?AU1@AEBVIBlockSource@@AEBVBlockPos@@@Z
    MCAPI static struct ResourceDropsContext fromProjectileHit(class IBlockSource const&, class BlockPos const&);

    // NOLINTEND
};
