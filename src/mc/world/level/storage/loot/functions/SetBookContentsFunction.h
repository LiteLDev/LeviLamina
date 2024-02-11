#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetBookContentsFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetBookContentsFunction& operator=(SetBookContentsFunction const&);
    SetBookContentsFunction(SetBookContentsFunction const&);
    SetBookContentsFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetBookContentsFunction@@UEAA@XZ
    virtual ~SetBookContentsFunction() = default;

    // vIndex: 1, symbol: ?apply@SetBookContentsFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random&, class LootTableContext&);

    // vIndex: 3, symbol: ?apply@SetBookContentsFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& itemInstance, class Random&, class LootTableContext&);

    // symbol:
    // ?deserialize@SetBookContentsFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fillUserData@SetBookContentsFunction@@AEAAXAEAVCompoundTag@@@Z
    MCAPI void _fillUserData(class CompoundTag& tag);

    // NOLINTEND
};
