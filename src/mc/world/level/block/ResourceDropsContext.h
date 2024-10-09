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
    MCAPI class BlockActor const* getBlockActor() const;

    MCAPI class ILevel& getLevel() const;

    MCAPI int getMiningLootBonusLevel() const;

    MCAPI class Random& getRandom() const;

    MCAPI bool isUsingSilkTouch() const;

    MCAPI static struct ResourceDropsContext
    fromExplosion(class IBlockSource const& region, float explosionRadius, class BlockPos const& position);

    MCAPI static struct ResourceDropsContext
    fromOtherCause(class IBlockSource const& region, class BlockPos const& position);

    MCAPI static struct ResourceDropsContext
    fromPlayerMining(class IBlockSource const& region, class BlockPos const& position, class ItemStack const& usedItem);

    MCAPI static struct ResourceDropsContext
    fromProjectileHit(class IBlockSource const& region, class BlockPos const& position);

    // NOLINTEND
};
