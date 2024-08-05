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
    MCAPI void deserialize(class Json::Value const& table);

    MCAPI void fill(class Container& container, class Random& random, class LootTableContext& context);

    MCAPI std::vector<class ItemStack> getRandomItems(class Random& random, class LootTableContext& context) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::vector<int> getAvailableSlots(class Container& container, class Random& random);

    MCAPI void shuffleAndSplitItems(std::vector<class ItemStack>& result, int availableSlots, class Random& random);

    // NOLINTEND
};
