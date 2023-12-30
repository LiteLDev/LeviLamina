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
    // vIndex: 0, symbol: __gen_??1LootItemRandomChanceWithLootingCondition@@UEAA@XZ
    virtual ~LootItemRandomChanceWithLootingCondition() = default;

    // vIndex: 1, symbol: ?applies@LootItemRandomChanceWithLootingCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
