#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemRandomDifficultyChanceCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemRandomDifficultyChanceCondition& operator=(LootItemRandomDifficultyChanceCondition const&);
    LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition const&);
    LootItemRandomDifficultyChanceCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LootItemRandomDifficultyChanceCondition() = default;

    // vIndex: 1, symbol: ?applies@LootItemRandomDifficultyChanceCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random&, class LootTableContext&);

    // NOLINTEND
};
