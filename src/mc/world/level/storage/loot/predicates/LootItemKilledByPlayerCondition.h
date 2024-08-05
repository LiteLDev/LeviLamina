#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemKilledByPlayerCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemKilledByPlayerCondition& operator=(LootItemKilledByPlayerCondition const&);
    LootItemKilledByPlayerCondition(LootItemKilledByPlayerCondition const&);
    LootItemKilledByPlayerCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemKilledByPlayerCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
