#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemRandomChanceWithSpecialModifierCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemRandomChanceWithSpecialModifierCondition&
    operator=(LootItemRandomChanceWithSpecialModifierCondition const&);
    LootItemRandomChanceWithSpecialModifierCondition(LootItemRandomChanceWithSpecialModifierCondition const&);
    LootItemRandomChanceWithSpecialModifierCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemRandomChanceWithSpecialModifierCondition() = default;

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
