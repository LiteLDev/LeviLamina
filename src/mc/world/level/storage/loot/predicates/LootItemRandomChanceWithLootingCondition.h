#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemRandomChanceWithLootingCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemRandomChanceWithLootingCondition& operator=(LootItemRandomChanceWithLootingCondition const&);
    LootItemRandomChanceWithLootingCondition(LootItemRandomChanceWithLootingCondition const&);
    LootItemRandomChanceWithLootingCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemRandomChanceWithLootingCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
