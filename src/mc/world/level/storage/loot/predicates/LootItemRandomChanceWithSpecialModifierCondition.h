#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemRandomChanceWithSpecialModifierCondition {

public:
    // prevent constructor by default
    LootItemRandomChanceWithSpecialModifierCondition&
    operator=(LootItemRandomChanceWithSpecialModifierCondition const&)                                        = delete;
    LootItemRandomChanceWithSpecialModifierCondition(LootItemRandomChanceWithSpecialModifierCondition const&) = delete;
    LootItemRandomChanceWithSpecialModifierCondition()                                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?applies\@LootItemRandomChanceWithSpecialModifierCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&); // NOLINT
};
