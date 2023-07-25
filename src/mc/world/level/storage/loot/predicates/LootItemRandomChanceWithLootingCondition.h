#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemRandomChanceWithLootingCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMCHANCEWITHLOOTINGCONDITION
public:
    LootItemRandomChanceWithLootingCondition& operator=(LootItemRandomChanceWithLootingCondition const&) = delete;
    LootItemRandomChanceWithLootingCondition(LootItemRandomChanceWithLootingCondition const&)            = delete;
    LootItemRandomChanceWithLootingCondition()                                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemRandomChanceWithLootingCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
};
