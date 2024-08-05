#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootPool {
public:
    // prevent constructor by default
    LootPool& operator=(LootPool const&);
    LootPool(LootPool const&);
    LootPool();

public:
    // NOLINTBEGIN
    MCAPI void
    addRandomItems(std::vector<class ItemStack>& result, class Random& random, class LootTableContext& context);

    MCAPI void deserialize(class Json::Value const& pool);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void
    addRandomItem(std::vector<class ItemStack>& result, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
