#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SpecificEnchantFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SpecificEnchantFunction& operator=(SpecificEnchantFunction const&);
    SpecificEnchantFunction(SpecificEnchantFunction const&);
    SpecificEnchantFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpecificEnchantFunction@@UEAA@XZ
    virtual ~SpecificEnchantFunction() = default;

    // vIndex: 1, symbol: ?apply@SpecificEnchantFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@SpecificEnchantFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // symbol:
    // ?deserialize@SpecificEnchantFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_applyInner@SpecificEnchantFunction@@AEAAXAEAVItemStackBase@@AEAVRandom@@AEAVLootTableContext@@_N@Z
    MCAPI void
    _applyInner(class ItemStackBase& item, class Random& random, class LootTableContext&, bool allowNonVanilla);

    // NOLINTEND
};
