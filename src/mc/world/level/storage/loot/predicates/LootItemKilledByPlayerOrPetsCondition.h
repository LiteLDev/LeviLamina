#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemKilledByPlayerOrPetsCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemKilledByPlayerOrPetsCondition& operator=(LootItemKilledByPlayerOrPetsCondition const&);
    LootItemKilledByPlayerOrPetsCondition(LootItemKilledByPlayerOrPetsCondition const&);
    LootItemKilledByPlayerOrPetsCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LootItemKilledByPlayerOrPetsCondition@@UEAA@XZ
    virtual ~LootItemKilledByPlayerOrPetsCondition() = default;

    // vIndex: 1, symbol: ?applies@LootItemKilledByPlayerOrPetsCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
