#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ExplorationMapFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    ExplorationMapFunction& operator=(ExplorationMapFunction const&);
    ExplorationMapFunction(ExplorationMapFunction const&);
    ExplorationMapFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExplorationMapFunction@@UEAA@XZ
    virtual ~ExplorationMapFunction() = default;

    // vIndex: 1, symbol: ?apply@ExplorationMapFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@ExplorationMapFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // symbol:
    // ?deserialize@ExplorationMapFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND
};
