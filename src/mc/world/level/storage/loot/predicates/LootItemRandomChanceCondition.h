#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemRandomChanceCondition {

public:
    // prevent constructor by default
    LootItemRandomChanceCondition& operator=(LootItemRandomChanceCondition const&) = delete;
    LootItemRandomChanceCondition(LootItemRandomChanceCondition const&)            = delete;
    LootItemRandomChanceCondition()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemRandomChanceCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
    // NOLINTEND
};
