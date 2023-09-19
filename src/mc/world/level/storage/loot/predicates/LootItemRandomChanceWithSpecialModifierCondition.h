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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?applies@LootItemRandomChanceWithSpecialModifierCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random&, class LootTableContext&);

    // NOLINTEND
};
