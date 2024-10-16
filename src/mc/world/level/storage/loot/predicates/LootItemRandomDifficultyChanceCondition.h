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
    // vIndex: 0
    virtual ~LootItemRandomDifficultyChanceCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool applies$(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
