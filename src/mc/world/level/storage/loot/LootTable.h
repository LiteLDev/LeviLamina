#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootTable {
public:
    // prevent constructor by default
    LootTable& operator=(LootTable const&);
    LootTable(LootTable const&);
    LootTable();

public:
    // NOLINTBEGIN
    // symbol: ?deserialize@LootTable@@QEAAXAEBVValue@Json@@@Z
    MCAPI void deserialize(class Json::Value const& table);

    // symbol: ?fill@LootTable@@QEAAXAEAVContainer@@AEAVRandom@@AEAVLootTableContext@@@Z
    MCAPI void fill(class Container& container, class Random& random, class LootTableContext& context);

    // symbol:
    // ?getRandomItems@LootTable@@QEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    MCAPI std::vector<class ItemStack> getRandomItems(class Random& random, class LootTableContext& context) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getAvailableSlots@LootTable@@AEAA?AV?$vector@HV?$allocator@H@std@@@std@@AEAVContainer@@AEAVRandom@@@Z
    MCAPI std::vector<int> getAvailableSlots(class Container& container, class Random& random);

    // symbol:
    // ?shuffleAndSplitItems@LootTable@@AEAAXAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@HAEAVRandom@@@Z
    MCAPI void shuffleAndSplitItems(std::vector<class ItemStack>& result, int availableSlots, class Random& random);

    // NOLINTEND
};
