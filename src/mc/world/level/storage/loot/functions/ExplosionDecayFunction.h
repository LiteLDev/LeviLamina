#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class ExplosionDecayFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    ExplosionDecayFunction& operator=(ExplosionDecayFunction const&);
    ExplosionDecayFunction(ExplosionDecayFunction const&);
    ExplosionDecayFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExplosionDecayFunction@@UEAA@XZ
    virtual ~ExplosionDecayFunction() = default;

    // vIndex: 1, symbol: ?apply@ExplosionDecayFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@ExplosionDecayFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
