#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SetOminousBottleFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetOminousBottleFunction& operator=(SetOminousBottleFunction const&);
    SetOminousBottleFunction(SetOminousBottleFunction const&);
    SetOminousBottleFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetOminousBottleFunction@@UEAA@XZ
    virtual ~SetOminousBottleFunction() = default;

    // vIndex: 1, symbol: ?apply@SetOminousBottleFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

    // vIndex: 3, symbol: ?apply@SetOminousBottleFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    // NOLINTEND
};
