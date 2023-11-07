#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SetDataFromColorIndexFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetDataFromColorIndexFunction& operator=(SetDataFromColorIndexFunction const&);
    SetDataFromColorIndexFunction(SetDataFromColorIndexFunction const&);
    SetDataFromColorIndexFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SetDataFromColorIndexFunction() = default;

    // vIndex: 1, symbol: ?apply@SetDataFromColorIndexFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

    // vIndex: 3, symbol:
    // ?apply@SetDataFromColorIndexFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_applyImpl@SetDataFromColorIndexFunction@@AEAA_NAEAPEBVItem@@PEBVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAH@Z
    MCAPI bool _applyImpl(class Item const*&, class Actor const*, std::string const&, int&);

    // NOLINTEND
};
