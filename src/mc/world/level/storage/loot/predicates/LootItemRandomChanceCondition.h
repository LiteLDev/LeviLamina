#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemRandomChanceCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemRandomChanceCondition& operator=(LootItemRandomChanceCondition const&);
    LootItemRandomChanceCondition(LootItemRandomChanceCondition const&);
    LootItemRandomChanceCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemRandomChanceCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
