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
    // vIndex: 0, symbol: __gen_??1LootItemKilledByPlayerCondition@@UEAA@XZ
    virtual ~LootItemKilledByPlayerCondition() = default;

    // vIndex: 1, symbol: ?applies@LootItemKilledByPlayerCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
