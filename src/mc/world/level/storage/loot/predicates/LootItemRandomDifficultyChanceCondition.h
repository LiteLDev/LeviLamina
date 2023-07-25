#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemRandomDifficultyChanceCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMDIFFICULTYCHANCECONDITION
public:
    LootItemRandomDifficultyChanceCondition& operator=(LootItemRandomDifficultyChanceCondition const&) = delete;
    LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition const&)            = delete;
    LootItemRandomDifficultyChanceCondition()                                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemRandomDifficultyChanceCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
};
