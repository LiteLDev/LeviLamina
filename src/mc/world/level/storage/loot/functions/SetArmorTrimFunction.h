#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetArmorTrimFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetArmorTrimFunction& operator=(SetArmorTrimFunction const&);
    SetArmorTrimFunction(SetArmorTrimFunction const&);
    SetArmorTrimFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetArmorTrimFunction@@UEAA@XZ
    virtual ~SetArmorTrimFunction() = default;

    // vIndex: 1, symbol: ?apply@SetArmorTrimFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

    // vIndex: 3, symbol: ?apply@SetArmorTrimFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    // symbol:
    // ?deserialize@SetArmorTrimFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_apply@SetArmorTrimFunction@@AEBAXAEAVItemStackBase@@AEBVLootTableContext@@@Z
    MCAPI void _apply(class ItemStackBase&, class LootTableContext const&) const;

    // NOLINTEND
};
