#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemRandomChanceWithLootingCondition {

public:
    // prevent constructor by default
    LootItemRandomChanceWithLootingCondition& operator=(LootItemRandomChanceWithLootingCondition const&) = delete;
    LootItemRandomChanceWithLootingCondition(LootItemRandomChanceWithLootingCondition const&)            = delete;
    LootItemRandomChanceWithLootingCondition()                                                           = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
