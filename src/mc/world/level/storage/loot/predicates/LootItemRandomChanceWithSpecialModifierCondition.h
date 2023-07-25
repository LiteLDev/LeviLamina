#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemRandomChanceWithSpecialModifierCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMCHANCEWITHSPECIALMODIFIERCONDITION
public:
    LootItemRandomChanceWithSpecialModifierCondition&
    operator=(LootItemRandomChanceWithSpecialModifierCondition const&)                                        = delete;
    LootItemRandomChanceWithSpecialModifierCondition(LootItemRandomChanceWithSpecialModifierCondition const&) = delete;
    LootItemRandomChanceWithSpecialModifierCondition()                                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?applies\@LootItemRandomChanceWithSpecialModifierCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
};
